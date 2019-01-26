#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/11
    * 
    * Проверка данных
    * 
    * Пока пользователь не введет слово "Проверка" - просите 
    * его это сделать. Как только это случится выведите на 
    * экран надпись "Ура, наконец!".
    */
    
    system("clear");
    cout << "Домашнее задание № 11.1\n" << endl;

    cout << "ПРОВЕРКА ДАННЫХ" << endl;

    char *str = "Проверка";
    char userStr[50];
   
    while(true)
    {
        cout << "Введите слово \"" << *str << "\": ";

        gets(userStr);
        
        //if (userString == str) break;

        cout << "Введено: " << userStr << endl;           
    }

    cout << "Ура, наконец!" << endl;    
      
    cout << endl;

    return 0;
}