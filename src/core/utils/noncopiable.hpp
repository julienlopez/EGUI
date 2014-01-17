#ifndef __NONCOPIABLE_HPP__
#define __NONCOPIABLE_HPP__

#include "namespace_utils.hpp"

BEGIN_NAMESPACE_CORE

BEGIN_NAMESPACE_UTILS

/**
  * \brief Defines a non-copiable class.
  */
class NonCopiable
{
protected:
    NonCopiable() = default;

    NonCopiable(const NonCopiable&) = delete;
    NonCopiable(NonCopiable&&) = delete;

    NonCopiable& operator=(const NonCopiable&) = delete;
    NonCopiable& operator=(NonCopiable&&) = delete;
};

END_NAMESPACE_UTILS

END_NAMESPACE_CORE

#endif // __NONCOPIABLE_HPP__
