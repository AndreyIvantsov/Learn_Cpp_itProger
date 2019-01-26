#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   /*
    * https://itproger.com/practice/cpp
    * 
    * ПЕРЕМЕННЫЕ
    * 
    * Работа с числами
    * 
    * У вас есть количество дней, записанное в переменной. 
    * Вам надо вывести все это как количество лет, недель и дней:
    * Дней - 2642
    * Вывод будет следующим
    * "Лет: 7, недель: 12, дней: 3"
    */

    system("clear");
    cout << "Практическое задание № 1.1\n" << endl;

    const int DAYS_OF_YEAR = 365;
    const int DAYS_OF_WEEK = 7;

    int totalDays = 2642;
    int years, weeks, days;

    years = totalDays / DAYS_OF_YEAR;
    weeks = totalDays % DAYS_OF_YEAR / DAYS_OF_WEEK;
    days  = totalDays % DAYS_OF_YEAR % DAYS_OF_WEEK;

    cout << "Дней - " << totalDays << endl;
    cout << "Лет: " << years << ", недель: " << weeks << ", дней: " << days << endl;

    cout << endl;

    return 0;
}