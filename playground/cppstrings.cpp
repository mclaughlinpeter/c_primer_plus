#include<iostream>
#include<sstream>
#include<string>

int main()
{
    std::string a = "hello ";
    char temp[] = {'w', 'o', 'r', 'l', 'd', '!', '\0'};
    std::string b(temp);
    a[0] = 'H';
    std::string c = a + b;
    std::cout << "The string c is: " << c << std::endl;
    std::cout << "The length of c is: " << c.length() << std::endl;

    return 0;
}