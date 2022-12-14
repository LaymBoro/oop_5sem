#include <iostream>
#include "Library.hpp"

int main()
{
    int menu = 0;

    std::cin >> menu;

    while(menu)
    {
        switch (menu)
        {
        case 1:
            std::cout << "input book: ";
            
            break;
        
        default:
            break;
        }
    }
    return 0;
}