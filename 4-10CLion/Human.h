//
// Created by bolitao on 19-4-17.
//

#ifndef INC_4_10CLION_HUMAN_H
#define INC_4_10CLION_HUMAN_H


#include <string>
#include "Date.h"

class Human {
public:
    Human(const std::string &number, const std::string &sex, const Date &birthDate, const std::string &id);

    const std::string &getNumber() const;

    void setNumber(const std::string &number);

    const std::string &getSex() const;

    void setSex(const std::string &sex);

    const Date &getBirthDate() const;

    void setBirthDate(const Date &birthDate);

    const std::string &getId() const;

    void setId(const std::string &id);

//    void set(std::string number, std::string sex, Date date, std::string id);

    void setDate(int year, int month, int day);

    void show();

private:
    std::string number;
    std::string sex;
    Date birthDate;
    std::string ID;
};


#endif //INC_4_10CLION_HUMAN_H
