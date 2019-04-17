//
// Created by bolitao on 19-4-3.
//

#ifndef CPPLEARNING_TRIANGLE_H
#define CPPLEARNING_TRIANGLE_H


#include "Shape.h"

class Triangle : public Shape {
public:
	Triangle(int a = 0, int b = 0) : Shape(a, b) {
	}

	int area() {
		cout << "Triangle class area :" << endl;
		return (width * height / 2);
	}
};


#endif //CPPLEARNING_TRIANGLE_H
