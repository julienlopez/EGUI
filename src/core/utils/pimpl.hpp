#ifndef __PIMPL_HPP__
#define __PIMPL_HPP__

#include <memory>

#include "utils.hpp"

BEGIN_NAMESPACE_CORE

BEGIN_NAMESPACE_UTILS

template<class IMPL>
class Pimpl
{
protected:
    template<class ... Args>
    Pimpl(Args... args): m_ptr(new IMPL(std::forward<Args>(args)...))
    {}

    ~pimpl() = default;

    IMPL& get()
    {
    	return *m_ptr;
    }

    const IMPL& get() const
    {
    	return *m_ptr;
    }

private:
    std::unique_ptr<IMPL> m_ptr;
};

END_NAMESPACE_UTILS

END_NAMESPACE_CORE

#endif
