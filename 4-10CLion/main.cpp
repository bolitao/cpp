#include <iostream>
#include "Human.h"

int main() {
    std::string number;
    std::string sex;
    std::string id;
    int year, month, day;
    std::cout << "请输入 number、sex、id 和日期" << std::endl;
    std::cin >> number >> sex >> id >> year >> month >> day;
    Date date(year, month, day);
    Human human(number, sex, date, id);
    human.show();
    return 0;
}