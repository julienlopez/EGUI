#ifndef __IRENDERER_HPP__
#define __IRENDERER_HPP__

#include <string>

#include <Core/Utils/NonCopiable>

#include "namespace_rendering.hpp"

BEGIN_NAMESPACE_RENDERING

class iRenderer : private Core::Utils::NonCopiable
{
public:
	virtual ~iRenderer() = default;

	std::string type() const;

	bool isRegistered() const;

protected:
	iRenderer() = default;

private:
	virtual std::string impl_type() const = 0;
	virtual bool impl_isRegistered() const = 0;
};

END_NAMESPACE_RENDERING

#endif
