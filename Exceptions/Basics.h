#pragma once
class basics
{
public:

	enum exceptions {STRING, INT, CHR, NONE};

	basics();
	static void throw_exception(const basics::exceptions* which);
	~basics();
};

