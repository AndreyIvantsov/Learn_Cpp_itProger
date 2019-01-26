#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/14
    * 
    * Создание файла с приветствием
    * 
    * Создайте файл hi.txt и поместите туда строку 
    * "Какая-угодно информация!" и закройте файл. 
    * 
    * Создайте файл hi.txt и поместите туда строку 
    * "Какая-угодно информация!" и закройте файл. 
    */
    
    system("clear");
    cout << "Домашнее задание № 14.1\n" << endl;

    cout << "СОЗДАНИЕ ФАЙЛА С ПРИВЕТСТВИЕМ" << endl;

    ofstream textFile("hi.txt", ios_base::app);
    if (textFile.is_open())
    {
        textFile << "Всем привет!" << endl;
        textFile.close();
    }
    else
    {
        cout << "Ошибка открытия файла!" << endl;
    }
        
    char text[50];

    ifstream file("hi.txt");

    if (file.is_open())
    {
        file.getline(text, 50);
        cout << text << endl;

        file.getline(text, 50);
        cout << text << endl;

        file.getline(text, 50);
        cout << text << endl;

        file.close();
    }
    else
    {
        cout << "Ошибка чтения из файла!" << endl;
    }

    cout << endl;

    return 0;
}