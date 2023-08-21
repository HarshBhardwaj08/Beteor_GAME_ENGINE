#pragma once

#include <memory>
#include "core.h"
#include "spdlog/spdlog.h"

namespace Beteor {
	class Beteor_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& getChintuLogger() { return chintu; }
		inline static std::shared_ptr<spdlog::logger>& getBintuLogger() { return bintu; }

	private:

		static std::shared_ptr<spdlog::logger> chintu;
		static std::shared_ptr<spdlog::logger> bintu;
		

	};


};

