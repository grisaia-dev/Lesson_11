#pragma once

#ifdef LEAVERLIBRARYDYNAMIC_EXPORTS
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif

#include <iostream>

class Leaver {
public:
    std::string leave(std::string _name);
};
