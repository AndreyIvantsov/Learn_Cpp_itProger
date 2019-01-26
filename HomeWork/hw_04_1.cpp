#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/4
    * 
    * Вывести четное число
    * 
    * Из двух чисел с разной четностью вывести 
    * на экран четное число. a, b - данные числа
    */
    
    system("clear");
    cout << "Домашнее задание № 4.1\n" << endl;

    int a = 36;
    int b = 25;

    if (a % 2 == 0) {
        cout << a << endl;
    }

    if (b % 2 == 0) {
        cout << b << endl;
    }
   
    cout << endl;

    return 0;
}