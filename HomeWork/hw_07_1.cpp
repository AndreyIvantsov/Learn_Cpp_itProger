#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/7
    * 
    * Исключение в функции
    * 
    * Создайте числовую переменную и проверяйте её 
    * в конструкции try catch. Если переменная будет 
    * больше 50, то выдавайте ошибку "Caught exception 
    * number: ЗДЕСЬ ПАРАМЕТР ИЗ throw". Если ошибки 
    * не будет найдено, то выведите надпись в 
    * консоль - "No exception detected!".
    */
    
    system("clear");
    cout << "Домашнее задание № 7.1\n" << endl;

    cout << "Исключение в функции:\n" << endl;

    const int ERR = 256;
    int user_input;
    
    try
    {
        cout << "Ввод числа больше 50 приведет к ошибке." << endl;
        cout << "Введите целое число: ";
        cin >> user_input;

        if (user_input > 50) throw ERR;

        cout << "No exception detected!" << endl;
    }
    catch(int nom_err)
    {
        cout << "Caught exception number: " << nom_err << endl;
    }
    
   
    cout << endl;

    return 0;
}