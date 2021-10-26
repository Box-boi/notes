#include <iostream>

int a=10;
int main()
{
    int a=15;
    std::cout << "\n local a=" << a << " global a=" << ::a << std::endl;

    ::a=20;
    std::cout << "\n local a=" << a << " global a=" << ::a << std::endl;
}