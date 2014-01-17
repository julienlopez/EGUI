#include <Gui/Application>
#include <Gui/Widget/Widget>

int main(int argc, char* argv[])
{
	Gui::Application app(argc, argv);

	Gui::Widget::Widget w;
	w.show();

	return app.exec();
}
