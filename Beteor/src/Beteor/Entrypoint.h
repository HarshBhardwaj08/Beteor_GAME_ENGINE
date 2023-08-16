#pragma once

extern Beteor::Appilication* Beteor::CreateApplication();

int main(int argc, char** argv) {

	std::cout << "My own engine ";
	auto app = Beteor::CreateApplication();
	app->run();
	delete app;

}
