#include <iostream>
#include <stdlib.h>
#include <string>
#include "class/Teacher.h"
#include "class/Rectangle.h"
#include "class/Box.h"

using namespace std;

namespace CompanyA {
    int getMaxOrMin(int *arr, int count, bool isMax) {
        int temp = arr[0];
        for (int i = 1; i < count; i++) {
            if (isMax) {
                if (temp < arr[i]) {
                    temp = arr[i];
                }
            } else if (!isMax) {
                if (temp > arr[i]) {
                    temp = arr[i];
                }
            }
        }
        return temp;
    }
}

class Student {
public:
    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Student::name = name;
    }

    const string &getGender() const {
        return gender;
    }

    void setGender(const string &gender) {
        Student::gender = gender;
    }

    int getScore() const {
        return score;
    }

    void initScore() {
        score = 0;
    }

    void study(int _score) {
        score += _score;
    }

private:
    string name;
    string gender;
    int score;
};

int main() {
    // 类的继承
    Rectangle rectangle;
    rectangle.setWidth(2);
    rectangle.setHeight(4);
    cout << "面积：" << rectangle.getArea() << endl;
    cout << "Cost: $ " << rectangle.getCost(rectangle.getArea()) << endl;

    // 运算符重载
    Box box1;
    Box box2;
    Box box3;
    double volume = 0.0;
    box1.setLength(6.0);
    box1.setBreadth(7.0);
    box1.setHeight(5.0);
    box2.setLength(12.0);
    box2.setBreadth(13.0);
    box2.setHeight(10.0);
    volume = box1.getVolume();
    cout << "Volume of box1: " << volume << endl;
    cout << "Volume of box2: " << box2.getVolume() << endl;
    box3 = box1 + box2;
    cout << "box3 的体积是：" << box3.getVolume() << endl;

    // getMaxOrMin Test
//    int arr1[4] = {3, 5, 1, 7};
//    bool isMax = false;
//    cin >> isMax;
//    cout << CompanyA::getMaxOrMin(arr1, 4, isMax) << endl;

    // String test
//    string name = "ZhangSan";
//    string name2 = "ZhangSan";
//    string hobby("football");
//    cout << name + " " + hobby << endl;
//    cout << "size of name: " << name.size() << endl;
//    cout << "DIE" + name + "DNLKWJE";
//    bool equal = name == name2;
//    cout << equal;

    // String demo
//    string name;
//    cout << "Please input your name: ";
//    getline(cin, name);
//    if (name.empty()) {
//        cout << "错误：输入为空" << endl;
//        exit(2);
//    }
//    if (name == "imooc") {
//        cout << "You are an administrator." << endl;
//    }
//    cout << "Hello " + name + "." << endl;
//    cout << "Length of your name: " << name.size() << "." << endl;
////    cout << "Length of your name: " << name.length() << " length()" << endl;
//    cout << "First letter of your name: " << name[0] << endl;

    // 封装 demo
    Student student;
    student.initScore();
    student.setName("hape");
    student.setGender("男");
    student.study(5);
    student.study(4);
    cout << "姓名:" + student.getName() + " 性别：" + student.getGender() + " 学分：" << student.getScore() << endl;

    // 分文件类 demo
//    Teacher teacher;
//    teacher.setGender("男");
//    teacher.setName("孔子");
//    teacher.setAge(20);
//    cout << teacher.getName() << " " << teacher.getGender() << " " << teacher.getAge() << endl;

    // 构造函数 demo，注意其和 Java 的区别
//    Teacher teacher1;
//    cout << teacher1.getName() << " " << teacher1.getAge() << endl;
//    Teacher teacher2("Merry", 15);
//    cout << teacher2.getName() << " " << teacher2.getAge() << endl;
//    Teacher teacher3("John");
//    cout << teacher3.getName() << " " << teacher3.getAge() << endl;


    // 初始化列表 TODO: 理解构造函数 (Onetab 保存的标签)
    Teacher teacher("Merry", 12, 150);
    cout << teacher.getName() << " " << teacher.getAge() << " " << teacher.getIMax() << endl;
    //    cout << teacher.getName() << " " << teacher.getAge() << endl;
    Teacher teacher1(2);
    cout << teacher1.getIMax() << endl;
    //    cout << teacher1().getName() << " " << teacher1().getAge() << " " << teacher1().getIMax() << endl;
    Teacher teacher2("DDD");
    cout << teacher2.getName() << " " << teacher2.getAge() << " " << teacher2.getIMax() << endl;

    return 0;
}