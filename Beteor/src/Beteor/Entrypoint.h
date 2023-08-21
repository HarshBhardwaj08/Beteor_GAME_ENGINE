#pragma once

extern Beteor::Appilication* Beteor::CreateApplication();

int main(int argc, char** argv) {

	Beteor::Log::Init();
	Beteor::Log::getChintuLogger()->warn(" This Would be the error!");
	Beteor::Log::getBintuLogger()->info("Beteor Engine");
	
	auto app = Beteor::CreateApplication();
	app->run();
	delete app;

}
