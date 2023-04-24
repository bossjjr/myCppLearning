#include <vector>
#include <iostream>
int main()
{
    std::vector<std::string> str;
    str.push_back("Hello,world");
    std::cout << str[0] << std::endl;
    return 0;
}