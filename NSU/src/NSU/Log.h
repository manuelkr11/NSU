#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace NSU {

    class NSU_API Log
    {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };

}

// Core log macros
#define HZ_CORE_TRACE(...)      ::NSU::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...)       ::NSU::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)       ::NSU::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...)      ::NSU::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_FATAL(...)      ::NSU::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define HZ_TRACE(...)           ::NSU::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_INFO(...)            ::NSU::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_WARN(...)            ::NSU::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_ERROR(...)           ::NSU::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_FATAL(...)           ::NSU::Log::GetClientLogger()->fatal(__VA_ARGS__)
