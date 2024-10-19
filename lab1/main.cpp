#include "task1.cpp"
#include "task2.cpp"
#include "task3.cpp"
int main()
{

int num;
std::cout << "Введите номер задания:" << std::endl;
std::cin >> num;
switch(num)
{
    case 1:
        task1();
        break;
    case 2:
        task2();
        break;
    case 3:
        task3();
        break;

}
}
