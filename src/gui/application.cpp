 #include "application.hpp"

 #include <cstdlib>

BEGIN_NAMESPACE_GUI

Application::Application(int /*argc*/, char* /*argv*/[])
{
	//ctor
}

Application::~Application()
{
	//dtor
}

int Application::exec()
{
	return EXIT_SUCCESS;
}

END_NAMESPACE_GUI
