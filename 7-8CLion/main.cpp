#include <iostream>
#include "Book.h"

int main() {
    Book book;
    book.name = "C++";
    book.pageCount = 500;
    std::cout << "书名：" << book.name << "，页数：" << book.pageCount;
    return 0;
}