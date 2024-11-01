#include <time.h>
#include <iostream>

void factorial10()
{
    int fac = 1;
    for(int i = 1; i <= 10; i++)
    {
        fac *= i;
    }
}

void task2()
{
clock_t start = clock();
for(int i = 0; i < 10000000; i++)
{
    factorial10();
}
clock_t end = clock();
double seconds = (double)(end - start) / CLOCKS_PER_SEC;
std::cout << seconds << std::endl;
}
