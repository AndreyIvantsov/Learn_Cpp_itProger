#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/7
    * 
    * Отслеживание нескольких ошибок
    * 
    * Создайте блок try catch, в котором будет несколько 
    * операторов catch. Они будут отличаться параметром 
    * переменной, которую они отслеживают.
    * 
    * Создайте такое исключение, которое бы подходило 
    * для одного из блоков catch.
    */
    
    system("clear");
    cout << "Домашнее задание № 7.2\n" << endl;

    const int ERR_100 = 100;
    const int ERR_200 = 200;
    const int ERR_300 = 300;

    const char ERR_A = 'A';
    const char ERR_B = 'B';
    const char ERR_C = 'C';

    int user_nom_input;
    char user_char_input;
    
    try
    {
        cout << "Ввод чисел 100, 200, 300 вызовит ошибку!" << endl;
        cout << "Ввод букв A, B, C вызовет ошибку!" << endl;

        cout << "Введите число: ";
        cin >> user_nom_input;

        cout << "Введите букву: ";
        cin >> user_char_input;

        if (user_nom_input == ERR_100) throw ERR_100;
        if (user_nom_input == ERR_200) throw ERR_200;
        if (user_nom_input == ERR_300) throw ERR_300;

        if (user_char_input == 'A') throw ERR_A;
        if (user_char_input == 'B') throw ERR_B;
        if (user_char_input == 'C') throw ERR_C;

        cout << "Ошибка не обнаружена!" << endl;
    }
    catch(int err_nomber)
    {
        cout << "Обнаружена ошибка с номером: " << err_nomber << endl;
    }
    catch(char err_char)
    {
        cout << "Обнаружена ошибка с литером: "<< err_char << endl;
    }
    
   
    cout << endl;

    return 0;
}