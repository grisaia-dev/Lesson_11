#pragma once
#include <string>
#ifdef TASK2DYLIB_EXPORTS
#define TASK2DYLIB_API __declspec(dllexport)
#else
#define TASK2DYLIB_API __declspec(dllimport)
#endif

namespace Leave {
	class Leaver {
	public:
		TASK2DYLIB_API std::string leave(std::string _name);
	};
}