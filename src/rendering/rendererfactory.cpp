#include "rendererfactory.hpp"

#include <Core/Utils/Factory>

BEGIN_NAMESPACE_RENDERING

std::unique_ptr<iRenderer> RendererFactory::createDefaultRenderer()
{
	using factory = Core::Utils::Factory<iRenderer, std::string>;
	return std::unique_ptr<iRenderer>(factory::instance().create("X11Renderer"));
}

END_NAMESPACE_RENDERING
