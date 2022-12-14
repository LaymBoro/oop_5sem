#include <iostream>
#include "Library.hpp"

int input()
{
	int value;
	while (!(std::cin >> value))
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Only num\n";
	}
	return value;
}

int main()
{
    int menu = 0;
    Library lib;
    Library tmp;
    std::string author;


    while(1)
    {
        std::cout << "Menu: \n";
        std::cout << "1)Add book in library\n2)Sort by title\n3)Find by author\n4)Library output\n5)Change book available status in lib\n7)Exit\n";
        menu = input();

        switch (menu)
        {
            case 1:
            {
                std::cout << "input book:\n";
                Book book;
                try
                {
                    std::cin >> book;
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << "\n";
                }
                
                lib.addBook(book);
                break;
            }
            case 2:
            {
                lib.sortByTitle();
                std::cout << lib;
                break;
            }
            case 3:
            {
                std::cout << "input author to find:\n";
                std::cin >> author;
                lib.showAuthor(author);
                break;
            }
            case 4:
            {
                try
                {
                    std::cout << lib;
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << "\n";
                }
                break;
            }
            case 5:
            {
                bool av;
                std::cout << "1)Return book to library\n0)Take book from library\n";
                std::cin >> av;
                lib.changeAvailable(av);
                break;
            }
            case 7:
            {
                exit(0);
            }
            default:
            {

                std::cout << "default!\n";
                break;
            }
        }
    }
    return 0;
}