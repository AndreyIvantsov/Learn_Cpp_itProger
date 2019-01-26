#include <iostream>;

using namespace std;

int main(int argc, char const *argv[])
{
    // Создайте указатель на указатель и измените значение первичной переменной на 59.4. 
    // Переменная: float a = 8.1;
    // https://itproger.com/course/cpp/9

    system("clear");
    cout << "Домашнее задание № 9.1\n" << endl;

    // Первый способ

    float a = 8.1;
    float *ptr_a = &a;
    float **ptr_ptr_a = &ptr_a;

    **ptr_ptr_a = 59.4;

    cout << "a = " << a << endl;
    cout << "ptr_a = " << ptr_a << endl;
    cout << "*ptr_a = " << *ptr_a << endl;
    cout << "ptr_ptr_a = " << ptr_ptr_a << endl;
    cout << "*ptr_ptr_a = " << *ptr_ptr_a << endl;
    cout << "**ptr_ptr_a = " << **ptr_ptr_a << endl;
    cout << endl;


    // Второй способ

    float b = 8.1;
    float *ptr_b = &b;
    float *ptr_ptr_b = ptr_b;

    *ptr_ptr_b = 59.4;

    cout << "b = " << b << endl;
    cout << "ptr_b = " << ptr_b << endl;
    cout << "*ptr_b = " << *ptr_b << endl;
    cout << "ptr_ptr_b = " << ptr_ptr_b << endl;
    cout << "*ptr_ptr_b = " << *ptr_ptr_b << endl;
    cout << endl;

    return 0;
}
