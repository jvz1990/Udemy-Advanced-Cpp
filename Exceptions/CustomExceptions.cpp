#include "CustomExceptions.h"
#include <ostream>
#include <iostream>


custom_exceptions::custom_exceptions()
{
	std::cout << "Custom Exceptions Created" << std::endl;
}

void custom_exceptions::throw_custom_exception()
{
	throw my_exception();
}


custom_exceptions::~custom_exceptions()
{
	std::cout << "Custom Exception destroyed" << std::endl;
}

const char* my_exception::what() const noexcept
{
	return "_Example of a custom exception";
}
