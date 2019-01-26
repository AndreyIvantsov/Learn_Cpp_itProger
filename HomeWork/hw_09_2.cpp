#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * Создайте ссылку на переменную типа double. 
    * Создайте еще одну ссылку на первую ссылку. 
    * При помощи второй ссылки измените значение 
    * переменной и выведите на экран все эти ссылки.
    * https://itproger.com/course/cpp/9
    */
    
    system("clear");
    cout << "Домашнее задание № 9.2\n" << endl;

    double a = 345.123;
    double &firstRef_a = a;
    double &secondRe_a = firstRef_a;

    secondRe_a = 123.345;
    secondRe_a++;

    cout << "a = " << a << endl;
    cout << "firstRef_a = " << firstRef_a << endl;
    cout << "&firstRef_a = " << &firstRef_a << endl;
    cout << "secondRe_a = " << secondRe_a << endl;
    cout << "&secondRe_a = " << &secondRe_a << endl;
    cout << endl;

    return 0;
}
