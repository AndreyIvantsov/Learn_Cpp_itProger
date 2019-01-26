#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/3
    * 
    * Попросите пользователя ввести его первую буквы его 
    * имени, возраст, а также его рост. После получения 
    * всех данных выведите их в консоле.
    */
    
    system("clear");
    cout << "Домашнее задание № 3.2\n" << endl;

    char name;
    unsigned short int age;
    unsigned short int height;

    cout << "Введите первую букву вашего имени: ";
    cin >> name;

    cout << "Введите ваш возраст: ";
    cin >> age;

    cout << "Введите ваш рост: ";
    cin >> height;

    cout << endl;

    cout << "Ваше имя начинается с буквы: " << name << endl;
    cout << "Ваш возраст: " << age << endl;
    cout << "Ваш рост: " << height << endl;
   
    cout << endl;

    return 0;
}