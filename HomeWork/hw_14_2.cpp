#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/14
    * 
    * Данные от пользователя
    * 
    * Создайте файл и поместите в него строку, 
    * которую введет пользователь с клавиатуры.
    * 
    * 
    */
    
    system("clear");
    cout << "Домашнее задание № 2.1\n" << endl;
    cout << "ДАННЫЕ ОТ ПОЛЬЗОВАТЕЛЯ\n" << endl;

    char userString[256];

    cout << "Введите стороку текста: ";
    cin >> userString;

    ofstream file("user.txt", ios_base::app);
    if (file.is_open())
    {
        file << userString << endl;
        file.close();
    }
    
    cout << endl;

    return 0;
}