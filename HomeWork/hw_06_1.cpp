#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/6
    * 
    * Сумма чисел
    * 
    * Найдите сумму 1+2+3+…+n, где число n 
    * вводится пользователем с клавиатуры
    */
    
    int n = 0;
    int sum = 0;

    system("clear");
    cout << "Домашнее задание № 6.1\n" << endl;

    cout << "Сумма чисел 1+2+3+...+n\n" << endl;

    cout << "Введите n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) sum += i; 

    cout << "Сумма чисев равна: " << sum << endl;
   
    cout << endl;

    return 0;
}