#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
   /*
     https://itproger.com/practice/cpp
    * 
    * ПЕРЕМЕННЫЕ
    * 
    * Работа с переменными
    * 
    * Создайте программу, которая будет просить пользователя 
    * ввести его имя, а также возраст. После получения данных 
    * необходимо вывести в консоль строку: 
    * "Привет, ИМЯ! Тебе уже ВОЗРАСТ".
    *
    * Подсказка: имя стоит помещать в переменную с типом данных string.
    */

    system("clear");
    cout << "Практическое задание № 1.2\n" << endl;

    string name;
    unsigned short int age;

    cout << "Введите Ваше имя:    ";
    getline(cin, name);
    //cin >> name;
    cout << "Введите Ваш возраст: ";
    cin >> age;
    cout << endl;

    cout << "Привет, " << name << "! Тебе уже " << age << "." << endl;

    cout << endl;

    return 0;
}