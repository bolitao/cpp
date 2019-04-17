//
// Created by bolitao on 19-4-17.
//

#include <iostream>
#include "Date.h"

int Date::getYear() const {
    return year;
}

void Date::setYear(int year) {
    Date::year = year;
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int month) {
    Date::month = month;
}

int Date::getDay() const {
    return day;
}

void Date::setDay(int day) {
    Date::day = day;
}

Date::Date(int year, int month, int day) {
    this->day = day;
    this->year = year;
    this->month = month;
}

Date::~Date() {
    std::cout << "~Date()" << std::endl;
}
