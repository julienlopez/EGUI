#ifndef __LAYOUT_HPP__
#define __LAYOUT_HPP__

#include <Core/Utils/NonCopiable>

#include "namespace_widget.hpp"

BEGIN_NAMESPACE_GUI

BEGIN_NAMESPACE_WIDGET

class Layout : private Core::Utils::NonCopiable
{
	public:
		Layout();
		virtual ~Layout();
	protected:
	private:
};

END_NAMESPACE_WIDGET

END_NAMESPACE_GUI

#endif // __LAYOUT_HPP__
