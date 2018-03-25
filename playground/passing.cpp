#include<iostream>

int afunction(int val, const int & cr, int * ptr, int & ref)
{
    val+=cr;
    *ptr+=10;
    ref+=10;

    return val;
}

int main()
{
    int a = 100, b = 200, c = 300;
    int ret;

    ret = afunction(a, a, &b, c);

    std::cout << "The value of a: " << a << std::endl;
    std::cout << "The value of b: " << b << std::endl;
    std::cout << "The value of c: " << c << std::endl;
    std::cout << "The value of ret: " << ret << std::endl;

    return 0;
}