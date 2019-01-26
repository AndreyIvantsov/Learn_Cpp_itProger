/*
 * https://itproger.com/course/cpp/12
 * 
 * Структура для дерева
 * 
 * Создайте структуру "Дерево". Добавьте к ней несколько 
 * переменных: высота, название дерева, возраст и ширина. 
 * На основе этой структуры создайте два объекта и добавьте 
 * к ним характеристики, что указаны в структуре. 
 * Выведите все на экран.
 */

#include <iostream>

using namespace std;

struct tree 
{
    char *name;
    int height;
    int age;
};

int main(int argc, char *argv[])
{
    system("clear");
    cout << "Домашнее задание № 12.1\n" << endl;
    cout << "ДЕРЕВЬЯ\n" << endl;

    const int TREE_COUNT = 3;

    tree arrTree[TREE_COUNT];

    arrTree[0].name = "Дуб";
    arrTree[0].age = 100;
    arrTree[0].height = 10;

    arrTree[1].name = "Сосна";
    arrTree[1].age = 25;
    arrTree[1].height = 8;

    arrTree[2].name = "Берёза";
    arrTree[2].age = 10;
    arrTree[2].height = 5;

    cout << "Название       : " << arrTree[0].name << "\t" << arrTree[1].name << "\t" << arrTree[2].name << endl;
    cout << "Возраст (лет)  : " << arrTree[0].age << "\t" << arrTree[1].age << "\t" << arrTree[2].age << endl;
    cout << "Высота  (метры): " << arrTree[0].height << "\t" << arrTree[1].height << "\t" << arrTree[2].height << endl;

    cout << endl;

    return 0;
}