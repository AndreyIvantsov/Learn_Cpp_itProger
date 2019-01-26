/*
 * https://itproger.com/course/cpp/12
 * 
 * Описание компьютера
 * 
 * Создайте структуру, которая будет описывать 
 * характеристики компьютера: процессор, вес, 
 * время автономной работы, количество ядер, 
 * установленная ОС. 
 * 
 * На основе такой структуры создайте объект и 
 * присвойте ему пару значений.
 */
    
#include <iostream>

using namespace std;

struct Computer
{
    char *proc;
    int countKernel;
    float weight;
    int timeOfWork;
    char *os;
};

int main(int argc, char *argv[])
{ 
    system("clear");
    cout << "Домашнее задание № 12.2\n" << endl;
    cout << "МОЙ КОМПЬЮТЕР:\n" << endl;

    Computer MyComputer;

    MyComputer.proc = "Intel Core i3";
    MyComputer.countKernel = 2;
    MyComputer.weight = 2.7;
    MyComputer.timeOfWork = 7;
    MyComputer.os = "Windows 10";

    cout << "Марка процессора              : " << MyComputer.proc << endl;
    cout << "Количество ядер               : " << MyComputer.countKernel << endl;
    cout << "Вес компьютера (кг)           : " << MyComputer.weight << endl;
    cout << "Время автономной работы (часы): " << MyComputer.timeOfWork << endl;
    cout << "Операционная система          : " << MyComputer.os << endl;
  
    cout << endl;

    return 0;
}