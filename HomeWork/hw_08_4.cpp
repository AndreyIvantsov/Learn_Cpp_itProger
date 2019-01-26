#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/8
    * 
    * Минимальный элемент
    * 
    * Создайте двумерный массив и найдите 
    * минимальный элемент среди всех чисел 
    * в массиве. 
    * 
    * Массив ниже:
    * { { 0, 34, -2 }, { 3, -4, 5 } }
    */
    
    system("clear");
    cout << "Домашнее задание № 2.1\n" << endl;

    cout << "Минимальный элемент" << endl;

    int arr[3][3] = { { 0, 34, -2 }, { 3, -4, 5 } };
    int min = arr[0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] < min) 
                min = arr[i][j];
        }
    }

    cout << "\nМинимальный элемент в массиве равен: " << min << endl;
   
    cout << endl;

    return 0;
}