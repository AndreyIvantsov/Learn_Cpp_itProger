#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/6
    * 
    * Непростой цикл
    * 
    * Выведите числа от -7 до 12. При этом выводите 
    * лишь каждое третье число с пропуском -1, 5 и 11. 
    * Сделайте такой вывод в циклах for и do while.
    */
    
    system("clear");
    cout << "Домашнее задание № 6.3\n" << endl;

    cout << "Цикл for: ";
    
    for(int i = -7; i < 12; i += 3)
    {
        if (i == -1 || i == 5 || i == 11) continue;
        cout << i << " ";
    }
    cout << endl;

    cout << "Цикл do : ";

    int j = -7;

    do {
        if ((j != -1) && (j != 5) && (j != 11)) 
            cout << j << " ";
        j += 3;
    } while( j < 12);
    cout << endl;
   
    cout << endl;

    return 0;
}