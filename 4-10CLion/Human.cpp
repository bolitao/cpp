//
// Created by bolitao on 19-4-17.
//

#include <iostream>
#include "Human.h"

const std::string &Human::getNumber() const {
    return number;
}

void Human::setNumber(const std::string &number) {
    Human::number = number;
}

const std::string &Human::getSex() const {
    return sex;
}

void Human::setSex(const std::string &sex) {
    Human::sex = sex;
}

const Date &Human::getBirthDate() const {
    return birthDate;
}

void Human::setBirthDate(const Date &birthDate) {
    Human::birthDate = birthDate;
}

const std::string &Human::getId() const {
    return ID;
}

void Human::setId(const std::string &id) {
    ID = id;
}

Human::Human(const std::string &number, const std::string &sex, const Date &birthDate, const std::string &id) : number(
        number), sex(sex), birthDate(birthDate), ID(id) {
    std::cout << "Human(string, string, Date, string)" << std::endl;
}