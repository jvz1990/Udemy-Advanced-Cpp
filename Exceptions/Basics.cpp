#include "Basics.h"
#include <iostream>


basics::basics()
{
	std::cout << "Hello from Basics Exception constructor" << std::endl;
}

void basics::throw_exception(const exceptions* which)
{
	switch (*which)
	{
	case STRING:
		throw std::string("Threw a string");
	case INT:
		throw -1;
	case CHR:
		throw "Threw a const char";
	case NONE:
		std::cout << " I am a happy basic method " << std::endl;
		break;
	default:
		throw "Something else went wrong";
	}
}

basics::~basics()
{
	std::cout << "Goodbye from Basics Exception destructor" << std::endl;
}
