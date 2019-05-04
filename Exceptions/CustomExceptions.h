#pragma once
#include <exception>

class custom_exceptions
{
public:
	custom_exceptions();
	static void throw_custom_exception();
	~custom_exceptions();
};

class my_exception : public std::exception {
public:
	const char* what() const noexcept override;
};