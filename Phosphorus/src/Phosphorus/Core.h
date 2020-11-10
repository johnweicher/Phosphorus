#pragma once

#ifdef PH_PLATFORM_WINDOWS
	#ifdef PH_BUILD_DLL
		#define PHOSPHORUS_API __declspec(dllexport)
	#else
		#define PHOSPHORUS_API __declspec(dllimport)
	#endif
#else
	#error Phosphorus only supports windows!
#endif