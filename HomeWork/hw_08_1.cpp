#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/8
    * 
    * Сумма чисел
    * 
    * Найдите сумму отрицательных элементов массива
    */
    

   int arr[5];
   int sum;

    system("clear");
    cout << "Домашнее задание № 8.1\n" << endl;

    cout << "Сумма отрицательных элементов в массиве" << endl;

    cout << "\nВведите пять элементов массива:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "элемент # " << i << ": ";
        cin >> arr[i];
        if (arr[i] < 0) sum += arr[i];
    }

    cout << "Сумма отрицательных элементов в масииве равна: " << sum << endl;
    

    
   
    cout << endl;

    return 0;
}