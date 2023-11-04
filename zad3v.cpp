// Задание 3 в) Напишите программу, которая принимает от пользователя координаты точки и
// определяет, попала ли точка в заштрихованную область.

#include <iostream>
#include<cmath>

int main(){
    double x, y;
    std::cout << "Enter point coordinates ( x, y ): ";
    std::cin >> x >> y;

    double equation = pow(x, 2) + pow ((y-1),2);
    double y_equation = 1 - pow(x, 2);

    if (equation <= 1 && y <= y_equation){
        std::cout << "Dot (" << x << ", " << y << ") fell into the shaded area" << std::endl;
    } else {
        std::cout << "Dot (" << x << ", " << y << ") missed the shaded area" << std::endl;
    }

    return 0;
}
