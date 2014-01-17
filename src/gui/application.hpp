#ifndef __APPLICATION_HPP__
#define __APPLICATION_HPP__

#include <memory>
#include <string>
#include <vector>

#include <Core/Utils/NonCopiable>

#include "namespace_gui.hpp"

namespace Rendering
{
	class iRenderer;
}

BEGIN_NAMESPACE_GUI

class Application : private Core::Utils::NonCopiable
{
	public:
		using string_vector = std::vector<std::string>;

		Application(int argc = 0, char* argv[] = nullptr);
		~Application();

		int exec();

		const string_vector& arguments() const;

	protected:
	private:
		std::unique_ptr<Rendering::iRenderer> m_renderer;
		string_vector m_arguments;

		void fillArguments(int argc, char** argv);
};

END_NAMESPACE_GUI

#endif // __APPLICATION_HPP__
