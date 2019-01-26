#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/8
    * 
    * Наибольшее
    * 
    * Найдите наибольший элемент массива
    */
    

   int arr[5];
   int max = INT32_MIN;

    system("clear");
    cout << "Домашнее задание № 8.2\n" << endl;

    cout << "Наибольший элемент в массиве" << endl;

    cout << "\nВведите пять элементов массива:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "элемент # " << i << ": ";
        cin >> arr[i];
        if (arr[i] > max) max = arr[i];
    }

    cout << "Наибольший элемент в массиве равен: " << max << endl;
    

    
   
    cout << endl;

    return 0;
}