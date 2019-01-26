#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/course/cpp/6
    * 
    * Квадраты чисел
    * 
    * Составьте программу, выводящую на экран 
    * квадраты чисел от 10 до 20 включительно
    */
    
    system("clear");
    cout << "Домашнее задание № 6.2\n" << endl;

    cout << "Квадраты чисел от 10 до 20:\n" << endl;

    for (int i = 10; i < 21; i++) {
        cout << i << " * " << i << " = " << i * i << endl;
    }
   
    cout << endl;

    return 0;
}