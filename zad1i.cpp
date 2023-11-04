// Задание №1 Дана функция y=f(x). Найти значение функции по x:
// y = 2x^2 - 3, если x > 7
// y = 0, если x = 7
// 2 * |x| + 3, если x < 7
#include <iostream>
#include<cmath>

int main(){
    int x;
    std::cout <<"Enter value: ";
    std::cin >> x;

    int y;

    if (x>7){
        y = 2 * pow(x,2) - 3;
    } else if (x == 7){
        y = 0;
    } else {
        y = 2 * abs(x) + 3;
    }

    std::cout<<"Function value y: " << y << std::endl;

    return 0;
}
