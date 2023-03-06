#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define NSU_API __declspec(dllexport)
	#else
		#define NSU_API __declspec(dllimport)
	#endif
#else
	#error Not-so-unreal Engine only supports Windows!
#endif

#define BIT(x) (1 << x)