#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/5
    * 
    * ФИО пользователя
    * 
    * Создайте программу, которая будет получать данные 
    * от пользователя: имя, фамилию и отчество. После 
    * чего будет выводить данные на экран.
    */
    
    system("clear");
    cout << "Домашнее задание № 5.3\n" << endl;

    string firstName, lastName, secondName;

    cout << "Введите фамилию : ";
    getline(cin, lastName);

    cout << "Введите имя     : ";
    getline(cin, firstName);

    cout << "Введите отчество: ";
    getline(cin, secondName);

    cout << endl;

    cout << "Здравствуйте, " << lastName << " " << firstName << " " << secondName << "!" << endl;
     
    cout << endl;

    return 0;
}