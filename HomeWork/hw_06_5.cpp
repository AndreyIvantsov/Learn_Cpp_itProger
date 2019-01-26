#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/6
    * 
    * Ввод конкретного числа
    * 
    * Попросите пользователя ввести число 15 с клавиатуры. 
    * До тех пор, пока он будет вводить другие числа вы 
    * будете просить ввести его именно это число. После 
    * ввода 15 выведите надпись "Ура, вы это сделали!".
    */
    
    system("clear");
    cout << "Домашнее задание № 6.5\n" << endl;

    int user_input;
    
    do
    {
        cout << "Введит число пятнадцать: ";
        cin >> user_input;
    } while (user_input != 15);

    cout << "Ура, вы это сделали!" << endl;
    
    cout << endl;

    return 0;
}