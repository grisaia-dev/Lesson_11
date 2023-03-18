#pragma once
#include <iostream>

#ifdef TASK_2_DYLIB_EXPORTS
#define TASK_2_DYLIB_API __declspec(dllexport)
#else
#define TASK_2_DYLIB_API __declspec(dllimport)
#endif

namespace Leave {
	class Leaver {
	public:
		TASK_2_DYLIB_API std::string leave(std::string _name);
	};
}