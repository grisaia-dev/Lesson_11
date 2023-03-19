#pragma once

#ifdef LIBLEAVER_EXPORTS
#define LIBLEAVER_API __declspec(dllexport)
#else
#define LIBLEAVER_API __declspec(dllimport)
#endif

#include <iostream>

class Leaver {
public:
	LIBLEAVER_API std::string leave(std::string _name);
};
