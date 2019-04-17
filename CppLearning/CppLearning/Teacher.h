#pragma once
#include <string>

class Teacher {
public:
	Teacher(std::string name = "Jim", int age = 1);
	Teacher(const Teacher &teacher);
	void setName(std::string name);
	std::string getName();
	void setAge(int age);
	int getAge();

private:
	std::string name;
	int age;
};
