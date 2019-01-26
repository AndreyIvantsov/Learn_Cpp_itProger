#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/4
    * 
    * Создание калькулятора
    * 
    * Попросите пользователя ввести два числа с клавиатуры 
    * и попросите чтобы он ввел арифметическое действие 
    * (+, -, *, /). В зависимости от символа, который будет 
    * введен, выполните математические действия над числами, 
    * которые ввел пользователь. 
    * 
    * Для этого используйте оператор switch case.
    */

    const int NO_ERR = 0;
    const int ERR_DIVADES_BY_ZERRO = 1;
    const int ERR_BAD_ACT = 2;

    int num1 = 0, num2 = 0, res;
    char act;
    int err = NO_ERR;

    system("clear");
    cout << "Домашнее задание № 4.4\n" << endl;

    cout << "КАЛЬКУЛЯТОР" << endl;

    cout << "Введите первое число:  ";
    cin >> num1;

    cout << "Действие (+, -, *, /): ";
    cin >> act;

    cout << "Введите второе число:  ";
    cin >> num2;

    switch (act) {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            if (num2 == 0) 
                err = ERR_DIVADES_BY_ZERRO;
            else
                res = num1 / num2;
            break;
        default:
            err = ERR_BAD_ACT;
    }
   
    switch (err)
    {
        case NO_ERR:
            cout << num1 << " " << act << " " << num2 << " = " << res << endl;
            break;
        case ERR_DIVADES_BY_ZERRO:
            cout << "Ошибка: деление на ноль!" << endl;
            break;
        case ERR_BAD_ACT:
            cout << "Ошибка: арифметическое действие введено не верно!" << endl;
            break;
    }
   
    cout << endl;

    return 0;
}