/*
* https://itproger.com/course/cpp/15
*
* Сравнение чисел
*
* Сделайте функцию, которая сравнивает введенные
* числа от пользователя и возвращает результат в
*  виде знаков >, < или =
*
*/

#include <iostream>

using namespace std;

char NumberComparison(int num1, int num2)
{
    char result;

    if (num1 < num2)
        result = '<';
    else if (num1 > num2)
        result = '>';
    else
        result = '=';

    return result;
}

int main()
{

    system("clear");
    cout << "Домашнее задание № 15.1\n" << endl;

    cout << "СРАВНЕНИЕ ЧИСЕЛ\n" << endl;

    int a, b;
    char space = ' ';

    cout << "Введите первое чилсо: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Результат сравнения : ";
    cout << a << space;
    cout << NumberComparison(a, b);
    cout << space << b << endl;

    cout << endl;

    return 0;
}
