#ifndef __COLOR_HPP__
#define __COLOR_HPP__

#include <memory>

#include "namespace_core.hpp"

BEGIN_NAMESPACE_CORE

class Color
{
	public:
		Color(uint8_t r_, uint8_t g_, uint8_t b_, uint8_t a_);
		~Color() = default;

		uint8_t r() const;
		uint8_t g() const;
		uint8_t b() const;
		uint8_t alpha() const;

	private:
		std::array<uint8_t, 4> m_values;
};

END_NAMESPACE_CORE

#endif // __COLOR_HPP__
