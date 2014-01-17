#ifndef __WIDGET_HPP__
#define __WIDGET_HPP__

#include <memory>

#include <Core/Utils/NonCopiable>

#include "namespace_widget.hpp"

BEGIN_NAMESPACE_GUI

BEGIN_NAMESPACE_WIDGET

class Layout;

class Widget : private Core::Utils::NonCopiable
{
	public:
		using up_layout = std::unique_ptr<Layout>;

		Widget();
		virtual ~Widget();

		void setLayout(up_layout&& layout_);
		up_layout& layout();

	protected:
		virtual void draw() const;

	private:
		 up_layout m_layout;
};

END_NAMESPACE_WIDGET

END_NAMESPACE_GUI

#endif // __WIDGET_HPP__
