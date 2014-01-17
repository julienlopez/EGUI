#ifndef __SINGLETON_HPP__
#define __SINGLETON_HPP__

#include <Core/Utils/NonCopiable>

BEGIN_NAMESPACE_CORE

BEGIN_NAMESPACE_UTILS

template<class T> class Singleton : public NonCopiable {
public:
    static T& instance() {
        static T i;
        return i;
    }

protected:
    Singleton() {}
};

END_NAMESPACE_UTILS

END_NAMESPACE_CORE

#endif // __SINGLETON_HPP__
