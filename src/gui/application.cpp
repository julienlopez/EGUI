#include "application.hpp"

#include <cstdlib>

#include <Rendering/RendererFactory>

BEGIN_NAMESPACE_GUI

Application::Application(int argc, char* argv[])
{
	fillArguments(argc, argv);
	m_renderer = Rendering::RendererFactory::createDefaultRenderer();
}

Application::~Application()
{
	//dtor
}

int Application::exec()
{
	return EXIT_SUCCESS;
}

const Application::string_vector& Application::arguments() const
{
	return m_arguments;
}

void Application::fillArguments(int argc, char** argv)
{
	for(int i = 0; i < argc; i++)
		m_arguments.push_back(argv[i]);
}

END_NAMESPACE_GUI
