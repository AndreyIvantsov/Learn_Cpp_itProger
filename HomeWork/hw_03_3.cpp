#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/3
    * 
    * Попросите пользователя ввести два числа. 
    * Выведите в консоль такие операции, как: 
    * добавление, вычитание, умножение и 
    * деление этих двух переменных.
    */
    
    system("clear");
    cout << "Домашнее задание № 3.3\n" << endl;

    float num1;
    float num2;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    cout << endl;

    cout << "Сумма:              " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << "Разность:           " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << "Произведение:       " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    if (num2 == 0) 
        cout << "Частное от деления: ошибка - второе число равно нулю!" << endl;
    else
        cout << "Частное от деления: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
   
    cout << endl;

    return 0;
}