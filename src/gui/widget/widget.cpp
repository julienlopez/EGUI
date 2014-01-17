#include "widget.hpp"
#include "layout.hpp"

BEGIN_NAMESPACE_GUI

BEGIN_NAMESPACE_WIDGET

Widget::Widget()
{
	//ctor
}

Widget::~Widget()
{
	//dtor
}

void Widget::setLayout(up_layout&& layout_)
{
	m_layout = std::move(layout_);
}

Widget::up_layout& Widget::layout()
{
	return m_layout;
}

void Widget::draw() const
{

}

void Widget::show()
{

}

END_NAMESPACE_WIDGET

END_NAMESPACE_GUI
