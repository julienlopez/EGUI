#ifndef __X11RENDERER_HPP__
#define __X11RENDERER_HPP__

#include <memory>

#include <X11/Xlib.h>

#include "crtp_renderer.hpp"

BEGIN_NAMESPACE_RENDERING

struct DisplayDeleter
{
	void operator()(Display* d) const;
};

class X11Renderer : public CRTP_Renderer<X11Renderer>
{
	public:
		X11Renderer();
		virtual ~X11Renderer() = default;

		static const std::string s_type;

	private:
		virtual std::string impl_type() const;

		std::unique_ptr<Display, DisplayDeleter> m_display;
};

END_NAMESPACE_RENDERING

#endif // __X11RENDERER_HPP__
