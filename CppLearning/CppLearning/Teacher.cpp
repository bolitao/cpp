#include "Teacher.h"
#include <iostream>

Teacher::Teacher(std::string name, int age): name(name), age(age) {
	std::cout << "Teacher(std::string name, int age)" << std::endl;
}

Teacher::Teacher(const Teacher& teacher) {
	std::cout << "Teacher(const Teacher& teacher)" << std::endl;
}


void Teacher::setName(std::string name) {
	Teacher::name = name;
}

std::string Teacher::getName() {
	return Teacher::name;
}

void Teacher::setAge(int age) {
	Teacher::age = age;
}

int Teacher::getAge() {
	return Teacher::age;
}
