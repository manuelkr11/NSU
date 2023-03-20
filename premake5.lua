workspace "NSU"
    architecture "x64"
    startproject "Sandbox"

    configurations
    {
        "Debug",
        "Release",
        "Dist"
    }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directories relative to root folder (solution directory)
IncludeDir = {}
IncludeDir["GLFW"] = "NSU/vendor/GLFW/include"

include "NSU/vendor/GLFW"

project "NSU"
    location "NSU"
    kind "SharedLib"
    language "C++"
    staticruntime "off" -- change

    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

    pchheader "nsupch.h"
    pchsource "NSU/src/nsupch.cpp"

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs
    {
        "%{prj.name}/src",
        "%{prj.name}/vendor/spdlog/include",
        "%{IncludeDir.GLFW}"
    }

    links
    {
        "GLFW",
        "opengl32.lib"
    }

    filter "system:windows"
        cppdialect "C++17"
        -- staticruntime "On"
        runtime "Debug"
        systemversion "latest"

        defines
        {
            "HZ_PLATFORM_WINDOWS",
            "HZ_BUILD_DLL"
        }

        postbuildcommands
        {
            ("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
        }

    filter "configurations:Debug"
        defines "HZ_DEBUG"
        symbols "On"
        runtime "Debug" --change

    filter "configurations:Release"
        defines "HZ_RELEASE"
        symbols "On"
        runtime "Release" --change

    filter "configurations:Dist"
        defines "HZ_DIST"
        symbols "On"
        runtime "Release" --change

project "Sandbox"
    location "Sandbox"
    kind "ConsoleApp"
    language "C++"
    staticruntime "off" --change

    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs
    {
        "NSU/vendor/spdlog/include",
        "NSU/src"
    }

    links
    {
        "NSU"
    }

    filter "system:windows"
        cppdialect "C++17"
        --staticruntime "On"
        runtime "Debug"--change
        systemversion "latest"

        defines
        {
            "HZ_PLATFORM_WINDOWS"
        }
    
    filter "configurations:Debug"
        defines "HZ_DEBUG"
        symbols "On"
        runtime "Debug" --change

    filter "configurations:Release"
        defines "HZ_RELEASE"
        symbols "On"
        runtime "Release" --change

    filter "configurations:Dist"
        defines "HZ_DIST"
        symbols "On"
        runtime "Release"--change