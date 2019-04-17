#include "BaseClass.h"
#include <iostream>


BaseClass::BaseClass() {
}


BaseClass::~BaseClass() {
}

void BaseClass::fn1() {
	std::cout << "fn1() of BaseClass" << std::endl;
}

void BaseClass::fn2() {
	std::cout << "fn2() of BaseClass" << std::endl;
}
