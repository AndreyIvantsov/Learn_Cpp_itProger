#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/10
    * 
    * Двумерный массив
    * 
    * Создайте двумерный динамический массив данных. Он должен состоять из 3 элементов и в каждом элементе массив из еще 2 элементов.
    * 
    * Для создания такого массива используйте цикл, в котором выделяйте память под каждый новый элемент в первом массиве.
    */
    
    system("clear");
    cout << "Домашнее задание № 2.1\n" << endl;

    int rows = 3, cols = 20;

    cout << "ДВУМЕРНЫЙ ДИНАМИЧЕСКИЙ МАССИВ " << rows << " X " << cols << endl << endl;

    int **arr = new int* [rows];

    for(int i = 0; i < rows; i++)
    {
        arr[i] = new int [cols];
    }
   
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            arr[i][j] = 10 + rand() % 90;
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } 
    
    for(int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    
    delete[] arr;
 
    cout << endl;

    return 0;
}