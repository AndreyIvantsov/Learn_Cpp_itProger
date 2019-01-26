#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/practice/cpp/
    * 
    * Простые переменные
    * 
    * Создайте переменные со значениями: 5, F, Привет, 90.2.
    * Создайте переменную, которую нельзя будет изменить и установите ей значение 67.
    * Выведите переменную со значением "Привет" на экран.
    */

    system("clear");
    cout << "Практическое задание № 1.4\n" << endl;

    cout << "Простые переменные:\n" << endl;

    short unsigned int a = 5;
    char b = 'F';
    string c = "Привет";
    float d = 90.2;
    const int e = 67;
    
    cout << c << endl;

    cout << endl;

    return 0;
}