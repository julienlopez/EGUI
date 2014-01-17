#ifndef __DEFAULTFACTORYERRORPOLICY__
#define __DEFAULTFACTORYERRORPOLICY__

#include <Core/Utils/parametertrait>

#include <stdexcept>

BEGIN_NAMESPACE_CORE

BEGIN_NAMESPACE_UTILS

template<class IdentifierType, class ProductType> class DefaultFactoryErrorPolicy
{
public:
	class Exception : public std::exception
	{
	public:
        Exception(typename const_parameter_trait<IdentifierType>::type id) : std::exception(), m_unknownId(id)
		{}

		virtual const char* what()
		{
			return "Unknown type passed to the factory.";
		}

        typename const_parameter_trait<IdentifierType>::type getId() const
		{
			return m_unknownId;
		}

	private:
		IdentifierType m_unknownId;
	};

protected:
    static ProductType* onUnknownType(typename const_parameter_trait<IdentifierType>::type id)
	{
		throw Exception(id);
	}
};

END_NAMESPACE_UTILS

END_NAMESPACE_CORE

#endif
