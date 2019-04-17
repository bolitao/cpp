//
// Created by bolitao on 19-4-17.
//

#include "Cat.h"

const int Cat::getNumOfCats() const {
    return numOfCats;
}

Cat::Cat(const int numOfCats) : numOfCats(numOfCats) {}
