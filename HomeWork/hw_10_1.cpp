#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/10
    * 
    * Динамическая переменная
    * 
    * Создайте переменную с динамическим выделением 
    * памяти. Поместите в нее значение 5.6 и не 
    * забудьте высвободить память по завершению работы.
    */
    
    system("clear");
    cout << "Домашнее задание № 10.1\n" << endl;

    cout << "Динамическая переменная\n" << endl;

    float *ptrA = new float(5.6);
    cout << "Создана динамическая переменная А = " << *ptrA << endl;
    delete ptrA;
   
    cout << endl;

    return 0;
}