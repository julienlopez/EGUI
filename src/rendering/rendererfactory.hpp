#ifndef __RENDERERFACTORY_HPP__
#define __RENDERERFACTORY_HPP__

#include <memory>

#include <Core/Utils/NonInstanciable>
#include <Rendering/iRenderer>

BEGIN_NAMESPACE_RENDERING

class RendererFactory : private Core::Utils::NonInstanciable
{
	public:
		static std::unique_ptr<iRenderer> createDefaultRenderer();
};

END_NAMESPACE_RENDERING

#endif // __RENDERERFACTORY_HPP__
