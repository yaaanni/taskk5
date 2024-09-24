#include <iostream>
int main() {
    double a,b;
    bool tf;
    //С логическим типом
    std::cout << "Введите a,b: ";
    std::cin >> a >> b;
    (a>b)?tf=true:tf=false;
    (tf==true)?std::cout << "a: " << a << " большее" << std::endl :(a==b)?std::cout << "a и b равны" << std::endl :std::cout << "b: " << b << " большее" << std::endl;
    //Без логического типа
    std::cout << "Введите a,b: ";
    std::cin >> a >> b;
    (a>b)?std::cout << "a: " << a << " большее":(a==b)?std::cout << "a и b равны":std::cout << "b: " << b << " большее";
    return 0;
}