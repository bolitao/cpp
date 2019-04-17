//
// Created by bolitao on 19-4-9.
//

#include <string>

#ifndef CPPLEARNINGCLION_TEACHER_H
#define CPPLEARNINGCLION_TEACHER_H


class Teacher {
private:
    std::string name;
    int age;
    std::string gender;
    const int iMax;
public:
    // 初始化列表先于构造函数执行，初始化列表只能用与构造函数，可以同时初始化多个数据成员
    Teacher(const int iMax);

//    Teacher(const std::string &name = "Jim", int age = 1);

    Teacher(const std::string &name = "Lucy", int age = 2, const int iMax = 100);

    const std::string &getName() const;

    void setName(const std::string &name);

    int getAge() const;

    void setAge(int age);

    const std::string &getGender() const;

    void setGender(const std::string &gender);

    const int getIMax() const;

    void teach();
};


#endif //CPPLEARNINGCLION_TEACHER_H
