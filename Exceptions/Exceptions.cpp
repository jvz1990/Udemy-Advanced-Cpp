// Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Basics.h"
#include "Exceptions.h"
#include "CustomExceptions.h"


int main()
{
	basic_exceptions();
	custom_exception();
}

void basic_exceptions()
{
	auto b = std::make_unique<basics>();
	auto exception = basics::exceptions::NONE;
	try
	{
		b->throw_exception(&exception);
	}
	catch (int e)
	{
		std::cerr << e << std::endl;
	}
	catch (std::string& e)
	{
		std::cerr << e << std::endl;
	}
	catch (const char* e)
	{
		std::cerr << e << std::endl;
	}
	catch (std::bad_alloc& e)
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
}

void custom_exception()
{
	auto c = std::make_unique<custom_exceptions>();
	try
	{
		c->throw_custom_exception();
	}
	catch (my_exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
