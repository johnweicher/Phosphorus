#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Phosphorus {

	class PHOSPHORUS_API Log
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

// Core logging macros
#define PH_CORE_TRACE(...) ::Phosphorus::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PH_CORE_INFO(...)  ::Phosphorus::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PH_CORE_WARN(...)  ::Phosphorus::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PH_CORE_ERROR(...) ::Phosphorus::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PH_CORE_FATAL(...) ::Phosphorus::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Core logging macros
#define PH_TRACE(...) ::Phosphorus::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PH_INFO(...)  ::Phosphorus::Log::GetClientLogger()->info(__VA_ARGS__)
#define PH_WARN(...)  ::Phosphorus::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PH_ERROR(...) ::Phosphorus::Log::GetClientLogger()->error(__VA_ARGS__)
#define PH_FATAL(...) ::Phosphorus::Log::GetClientLogger()->fatal(__VA_ARGS__)