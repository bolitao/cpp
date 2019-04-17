//
// Created by bolitao on 19-4-9.
//

#include <iostream>
#include "Teacher.h"

const std::string &Teacher::getName() const {
    return name;
}

void Teacher::setName(const std::string &name) {
    Teacher::name = name;
}

int Teacher::getAge() const {
    return age;
}

void Teacher::setAge(int age) {
    Teacher::age = age;
}

const std::string &Teacher::getGender() const {
    return gender;
}

void Teacher::setGender(const std::string &gender) {
    Teacher::gender = gender;
}

void Teacher::teach() {
    std::cout << "上课" << std::endl;
}

//Teacher::Teacher() {
//    name = "One";
//    age = 0;
//    std::cout << "Teacher::Teacher()" << std::endl;
//}

//Teacher::Teacher(const std::string &name, int age) : name(name), age(age) {
//    std::cout << "Teacher::Teacher(const std::string &name, int age)" << std::endl;
//}

// 冒号后是初始化列表
//Teacher::Teacher(const std::string &name, int age) : name(name), age(age) {
//    std::cout << "Teacher::Teacher(const std::string &name, int age)" << std::endl;
//}

Teacher::Teacher(const std::string &name, int age, const int iMax) : name(name), age(age), iMax(iMax) {
    std::cout << "构造函数被调用：Teacher(const std::string &name, int age, const int iMax)" << std::endl;
}

Teacher::Teacher(const int iMax) : iMax(iMax) {
    std::cout << "构造函数被调用：Teacher(const int iMax)" << std::endl;
}

const int Teacher::getIMax() const {
    return iMax;
}