#ifndef __APPLICATION_HPP__
#define __APPLICATION_HPP__

#include <vector>
#include <string>

#include <Core/Utils/NonCopiable>

#include "namespace_gui.hpp"

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
		string_vector m_arguments;

		void fillArguments(int argc, char** argv);
};

END_NAMESPACE_GUI

#endif // __APPLICATION_HPP__
