#include "Dog.h"
#include <iostream>


Dog::Dog() {
	std::cout << "Dog 的构造函数被执行" << std::endl;
}


Dog::~Dog() {
	std::cout << "Dog 的析构函数被执行" << std::endl;
}
