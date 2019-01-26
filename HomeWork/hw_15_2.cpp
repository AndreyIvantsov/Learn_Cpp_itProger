/*
 * https://itproger.com/course/cpp/14
 * 
 * Подсчет километров
 * 
 * Ваша задача сделать функцию, которая будет принимать 
 * 2  параметра (время и скорость) и возвращать сколько 
 * проедет километров человек исходя из параметров.
 * 
 * Также в  функции вам необходимо не только передавать 
 * данные обратно, но и вывести  их на экран. Так, если 
 * человек проедет 1 километр, то писать: "Вы проедете: 
 * 1 километр", иначе писать так:  "Вы проедете: {здесь 
 * цифра} километров". Такую проверку и вывод в консоль 
 * осуществить через новую функцию, которую вы вызовите 
 * из первой функции. 
 */

#include <iostream>

using namespace std;

void PrintSpacing(float S)
{
    if (S == 1)
        cout << "Вы пройдете: 1 километр." ;
    else
        cout << "Вы пройдете: " << S << " километров.";
    cout << endl;
}

void Spacing(float V, float T)
{
    PrintSpacing(V * T);
}

int main(int argc, char *argv[])
{
    
    system("clear");
    cout << "Домашнее задание № 15.2\n" << endl;

    cout << "ПОДСЧЕТ КИЛОМЕТРОВ\n" << endl;

    bool tobecontinue = true;
    char YesNo = 'Y';
    float V = 0, T = 0;
    
    while(tobecontinue)
    {
        cout << "Введите Вашу скорость [км/час]: ";
        cin >> V;
        cout << "Введите время в пути  [  часы]: ";
        cin >> T;

        Spacing(V, T);

        cout << "Продолжить? [Y/N]";
        cin >> YesNo;
        tobecontinue = YesNo == 'Y' || YesNo == 'y' || YesNo == 'Д' || YesNo == 'д';
        cout << endl;
    }
      
    cout << endl;

    return 0;
}