#ifndef __CRTP_RENDERER_HPP__
#define __CRTP_RENDERER_HPP__

#include <Core/Utils/Factory>

#include "irenderer.hpp"

BEGIN_NAMESPACE_RENDERING

template<class T>
class CRTP_Renderer : public iRenderer
{
	public:
		virtual ~CRTP_Renderer() = default;

		static const bool s_isRegistered;

		virtual bool impl_isRegistered() const override final
		{
			return s_isRegistered;
		}

	protected:
		CRTP_Renderer() = default;
};

template<class T> bool registerAnalyzer()
{
    return Core::Utils::Factory<iRenderer, std::string>::instance().registerProduct(T::s_type, [](){ return new T; });
}

template<class T> const bool CRTP_Renderer<T>::s_isRegistered = registerAnalyzer<T>();

END_NAMESPACE_RENDERING

#endif
