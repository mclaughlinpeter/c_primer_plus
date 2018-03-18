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

    int loc = c.find_first_of('w');
    c.replace(loc, 1, 1, 'W');
    std::cout << "The string c is now: " << c << std::endl;

    c.insert(5, " to the");
    std::cout << "The string c is now: " << c << std::endl;

    std::stringstream ss;
    ss << c;
    std::string token;
    while(std::getline(ss, token, ' '))
        std::cout << "Token: " << token << std::endl;

    return 0;
}