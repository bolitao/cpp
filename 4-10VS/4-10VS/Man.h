#pragma once
#include <string>
#include "Date.h"

class Man {
public:
	Man();
	~Man();

	std::string number1() const {
		return number;
	}

	std::string gender1() const {
		return gender;
	}

	Date birthDate1() const {
		return birthDate;
	}

private:
	std::string number;
	std::string gender;
	Date birthDate;
	std::string id;
};
