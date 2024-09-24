#include <iostream>
int main() {
 double x,y;
 std::cout << "Введите x, y: ";
 std::cin >> x >> y;
 bool tf;
 //с логическим типом
 if (x > y) {
    tf = true;
 } else {
    tf = false;
 }
 if (tf == true) {
    std::cout << "x: " << x << " большее" << std::endl;
 } else if (x == y) {
   std::cout << "x и y равны" << std::endl; 
 } else {
    std::cout << "y: " << y << " большее" << std::endl;
 }
 //без логического типа
 std::cout << "Введите x, y: ";
 std::cin >> x >> y;
 if (x > y) {
    std::cout << "x: " << x << " большее";
 } else if (x == y) {
 std::cout << "x и y равны"; 
 } else {
    std::cout << "y: " << y << " большее" << std::endl;
 }
}