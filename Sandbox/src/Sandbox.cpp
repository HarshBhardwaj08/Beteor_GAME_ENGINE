#include <Beteor.h>

class Sandbox : public Beteor::Appilication
{
public:
	Sandbox();
	~Sandbox();

private:

};

Sandbox::Sandbox()
{
}

Sandbox::~Sandbox()
{
}

Beteor::Appilication* Beteor::CreateApplication() {

	return new Sandbox();
}