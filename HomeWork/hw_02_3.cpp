#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/2
    * 
    * Создайте приложение, которое не будет 
    * закрываться моментально. Для этого 
    * используйте команду system("pause");.
    * 
    */
    
    system("clear");
    cout << "Домашнее задание № 2.3\n" << endl;

    cout << "Начало паузы, нажмите любую клавишу." << endl;
    system("pause");
    cout << "Конец паузы, работа программы окончена" << endl;
   
    cout << endl;

    return 0;
}