#include <iostream>

using namespace std;

class Car;
class Boat;

class Boat {
private:
    int weight;

public:
    Boat(int weight)  //无参数构造函数
    {
        this->weight = weight;
    }

    friend int totalWeight(Boat &, Car &);  //注意这里
};

class Car {
private:
    int weight;

public:
    Car(int weight)  //无参数构造函数
    {
        this->weight = weight;
    }

    friend int totalWeight(Boat &, Car &);  //注意这里
};

int totalWeight(Boat &boat, Car &car)  //注意这里
{
    return boat.weight + car.weight;
}

int main() {
    Boat boat(300);
    Car car(400);
    cout << totalWeight(boat, car) << endl;  //不是>>而是<<
    return 0;
}