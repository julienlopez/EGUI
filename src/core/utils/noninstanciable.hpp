#ifndef __NONINSTANCIABLE_HPP__
#define __NONINSTANCIABLE_HPP__

#include "utils.hpp"

BEGIN_NAMESPACE_CORE

BEGIN_NAMESPACE_UTILS

/**
  * \brief Defines a non-instanciable class.
  */
class NonInstanciable
{
    NonInstanciable() = delete;
    NonInstanciable(const NonInstanciable&) = delete;
    NonInstanciable(NonInstanciable&&) = delete;

    NonInstanciable& operator=(const NonInstanciable&) = delete;
    NonInstanciable& operator=(NonInstanciable&&) = delete;

    ~NonInstanciable() = delete;
};

END_NAMESPACE_UTILS

END_NAMESPACE_CORE

#endif // __NONINSTANCIABLE_HPP__
