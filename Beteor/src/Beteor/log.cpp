#include "Log.h"
#include <spdlog/spdlog.h>
#include "spdlog/sinks/stdout_color_sinks.h"
#include <spdlog/sinks/ansicolor_sink.h>

namespace Beteor {
	 std::shared_ptr<spdlog::logger> Log:: chintu;
     std::shared_ptr<spdlog::logger> Log:: bintu;


	void Log::Init()
	{
		
		spdlog::set_pattern("%^[%T] %n: %v%$");

		chintu = spdlog::stderr_color_mt("Betreor");
		chintu->set_level(spdlog::level::trace);

	
		bintu = spdlog::stderr_color_mt("Engine");
		bintu->set_level(spdlog::level::trace);
	}

}