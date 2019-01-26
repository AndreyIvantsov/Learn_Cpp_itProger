#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/4
    * 
    * Деление на ноль
    * 
    * Попросите пользователя ввести два числа с 
    * клавиатуры. Создайте новую переменную и 
    * при помощи тернарного оператора поместите 
    * в нее либо деление полученных чисел, либо 
    * число 1.
    */
    
    system("clear");
    cout << "Домашнее задание № 4.2\n" << endl;

    int num1, num2, res;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    cout << endl;

    res = num2 == 0 ? 1 : num1 / num2;

    cout << res << endl;
   
    cout << endl;

    return 0;
}