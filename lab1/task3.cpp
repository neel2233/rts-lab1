#include <thread>
#include <mutex>
#include <string>
#include <iostream>
#include <time.h>

void Func(std::string name)
{
    for(int i = 0; i < 10000000; i++)
    {
        int fac = 1;
        for(int j = 1; j <= 10; j++)
        {
            fac *= j;
        }

    }
}

void task3_1()
{
    clock_t start = clock();
    std::thread thread1(Func, "t1");
    std::thread thread2(Func, "t2");
    thread1.join();
    thread2.join();

    clock_t end = clock();
    double seconds = (double)(end - start) / CLOCKS_PER_SEC;

    std::cout << "2 Потока " << seconds << std::endl;
}

void task3_2()
{
    clock_t start = clock();
    Func("t1");
    Func("t2");
    clock_t end = clock();
    double seconds = (double)(end - start) / CLOCKS_PER_SEC;

    std::cout << "Последовательно " << seconds << std::endl;
}


void task3()
{
    
    task3_2();
    task3_1();
}