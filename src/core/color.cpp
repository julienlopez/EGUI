 #include "color.hpp"

BEGIN_NAMESPACE_CORE

Color::Color(uint8_t r_, uint8_t g_, uint8_t b_, uint8_t a_): m_values{r_, g_, b_, a_}
{}

uint8_t Color::r() const
{
	return m_values[0];
}

uint8_t Color::g() const
{
	return m_values[1];
}

uint8_t Color::b() const
{
	return m_values[2];
}

uint8_t Color::alpha() const
{
	return m_values[3];
}

END_NAMESPACE_CORE
