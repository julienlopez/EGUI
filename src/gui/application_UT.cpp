#include <gtest/gtest.h>

#include "application.hpp"

TEST(Application_UT, NoArgument)
{
	Gui::Application app;
	ASSERT_TRUE(app.arguments().empty());
}

TEST(Application_UT, EmptyArguments)
{
	char** ptr = nullptr;
	Gui::Application app(0, ptr);
	ASSERT_TRUE(app.arguments().empty());
}

TEST(Application_UT, OneArgument)
{
	std::vector<const char*> args = {"first"};
	Gui::Application app(1, const_cast<char**>(args.data()));
	ASSERT_EQ(1, app.arguments().size());
	ASSERT_EQ(args[0], app.arguments().front());
}

TEST(Application_UT, TwoArguments)
{
	std::vector<const char*> args = {"first", "Second"};
	Gui::Application app(2, const_cast<char**>(args.data()));
	ASSERT_EQ(2, app.arguments().size());
	ASSERT_EQ(args[0], app.arguments().front());
	ASSERT_EQ(args[1], app.arguments().back());
}
