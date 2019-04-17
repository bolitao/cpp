//
// Created by bolitao on 19-4-17.
//

#ifndef INC_4_10CLION_DATE_H
#define INC_4_10CLION_DATE_H


class Date {
public:

    ~Date();

    Date(int year, int month, int day);

    int getYear() const;

    void setYear(int year);

    int getMonth() const;

    void setMonth(int month);

    int getDay() const;

    void setDay(int day);

private:
    int year;
    int month;
    int day;
};


#endif //INC_4_10CLION_DATE_H
