// Задание 2 (в) Напишите программу, которая принимает от пользователя координаты точки и
// определяет, попала ли точка в заштрихованную область
#include<iostream>

int main(){
    float x,y;
    std::cout <<"Enter value x: ";
    std::cin >> x;
    std::cout <<"Enter value y: ";
    std::cin >> y;

    if (y >= x && y <= 2 - x * x){
        std::cout << "Dot("<<x<<","<<y<<")fell into the shaded area." <<std::endl;
    } else {
        std::cout << "Dot("<<x<<","<<y<<")missed the shaded area." << std::endl;
    }

    return 0;
}
