#include "irenderer.hpp"

BEGIN_NAMESPACE_RENDERING

std::string iRenderer::type() const
{
	return impl_type();
}

bool iRenderer::isRegistered() const
{
	return impl_isRegistered();
}

END_NAMESPACE_RENDERING
