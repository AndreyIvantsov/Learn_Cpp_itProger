#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/3
    * 
    * Создайте несколько переменных для хранения таких значений, 
    * как: -34, 4, 'R', 23.093433222, 40000, true, 0. Продумайте 
    * типы данных для переменных, чтобы они максимально подходили 
    * под каждое значение.
    */
    
    system("clear");
    cout << "Домашнее задание № 3.1\n" << endl;

    short int a = -34;
    unsigned short int b1 = 4;
    short int b2 = 4;
    char c = 'R';
    float d = 23.093433222;
    unsigned short int e = 40000;
    bool f = true;
    short int g = 0;

   /*
    * Правильное решение:
    * 
    * short int simple_num = -34;
    * short int num = 4;
    * char sym = 'R';
    * double float_num = 23.093433222;
    * unsigned short int number = 40000;
    * bool val = true;
    * short int simple = 0;
    */

    cout << "a  = " << a << endl;
    cout << "b1 = " << b1 << endl;
    cout << "b2 = " << b2 << endl;
    cout << "c  = " << c << endl;
    cout << "d  = " << d << endl;
    cout << "e  = " << e << endl;
    cout << "f  = " << f << endl;
    cout << "g  = " << g << endl;
   
    cout << endl;

    return 0;
}