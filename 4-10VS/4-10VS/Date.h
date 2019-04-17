#pragma once
#include <string>

class Date {
public:
	Date();
	~Date();

	int day1() const {
		return day;
	}

	int month1() const {
		return month;
	}

	int year1() const {
		return year;
	}

private:
	int day;
	int month;
	int year;
};
