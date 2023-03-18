#include "Greeter.h"

namespace Greet {
	std::string Greeter::greet(std::string _name) {
		return "Здравствуйте, " + _name + "!";
	}
}