#include "Mammal.h"
#include <iostream>


Mammal::Mammal() {
	std::cout << "Mammal 的构造函数被执行" << std::endl;
}


Mammal::~Mammal() {
	std::cout << "Mammal 的析构函数被执行" << std::endl;
}
