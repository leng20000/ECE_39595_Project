#include <iostream>
#include <string>
#include <vector>

int main(int argc, char **argv)
{
    std::string filename;
    
    if(argc >= 2)
    {
        filename = args[1];
    }
    else
    {
        std::cout <<"Enter filename: ";
        std::cin >> filename;
        std::cin.get();
    }
}