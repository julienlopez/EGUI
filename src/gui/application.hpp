#ifndef __APPLICATION_HPP__
#define __APPLICATION_HPP__

#include <Core/Utils/NonCopiable>

#include "namespace_gui.hpp"

BEGIN_NAMESPACE_GUI

class Application : private Core::Utils::NonCopiable
{
	public:
		Application(int argc, char* argv[]);
		~Application();

		int exec();

	protected:
	private:
};

END_NAMESPACE_GUI

#endif // __APPLICATION_HPP__
