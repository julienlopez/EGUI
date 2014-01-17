#include "x11renderer.hpp"

BEGIN_NAMESPACE_RENDERING

void DisplayDeleter::operator()(Display* d) const
{
	free(d);
}

const std::string X11Renderer::s_type("X11Renderer");

X11Renderer::X11Renderer()
{
	m_display.reset(XOpenDisplay(nullptr));
}

std::string X11Renderer::impl_type() const
{
	return s_type;
}

END_NAMESPACE_RENDERING
