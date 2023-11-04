// Задание 4 Пользователь вводит день месяца. Вывести на экран день недели. Считаем, что 1-е
// число месяца это вторник. Доп. задача 5: Пользователь также вводит число от 1 до 7, обозначающее
// номер недели для первого числа месяца.
#include<iostream>

int main(){
    int day, firstdayofweek;
    std::cout << "Enter the day of the month: ";
    std::cin >> day;
    std::cout << "Enter the week number for the first day of the month (from 1 to 7): ";
    std::cin >> firstdayofweek;

    int dayofweek = ( day  - 1 + (firstdayofweek - 1 )) % 7;

    switch (dayofweek) {
        case 0:
                std::cout << "Monday" << std::endl;
                break;
            case 1:
                std::cout << "Tuesday" << std::endl;
                break;
            case 2:
                std::cout << "Wednesday" << std::endl;
                break;
            case 3:
                std::cout << "Thursday" << std::endl;
                break;
            case 4:
                std::cout << "Friday" << std::endl;
                break;
            case 5:
                std::cout << "Saturday" << std::endl;
                break;
            case 6:
                std::cout << "Sunday" << std::endl;
                break;
            default:
                std::cout << "Incorrect day" << std::endl;
                break;
    }

    return 0;
}
