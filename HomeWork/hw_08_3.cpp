#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/8
    * 
    * Одинаковые числа в массивах
    * 
    * Дано два массива чисел, необходимо вывести 
    * на экран все числа, которые одновременно 
    * присутствуют в обеих массивах. 
    * 
    * Вот оба массива:
    * int array_1[] = {1, 2, 3, 5, 7, 9, 10};
    * int array_2[] = {1, 4, 3, 5, 8, 9, 0};
    */
    
    system("clear");
    cout << "Домашнее задание № 8.3\n" << endl;

    cout << "Одинаковые числа в массивах" << endl;

    int array_1[] = {1, 2, 3, 5, 7, 9, 10};
    int array_2[] = {1, 3, 4, 5, 8, 9, 0};

    cout << "\nПервй массив    : ";
    for (int i = 0; i < 7; i++)
    {
       cout << array_1[i] << " ";
    }
    cout << endl;

    cout << "Второй массив   : ";
    for (int i = 0; i < 7; i++)
    {
       cout << array_2[i] << " "; 
    }
    cout << endl;

    cout << "\nОдинаковые числа: ";
    for (int i = 0; i < 7; i++)
    {     
       for(int j = 0; j < 7; j++)
       {
            if (array_1[i] == array_2[j]) 
                cout << array_1[i] << " ";
       }    
    }
    cout << endl;

    cout << endl;

    return 0;
}