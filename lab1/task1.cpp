#include <iostream>
#include <string>

void task1()
{
    std::string s = "01234";
    for(unsigned int i = s.size() - 1; i >= 0; i-- )
    {
    std::cout<<s[i]<<std::endl;
    }
}