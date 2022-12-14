#include <iostream>
#include "Library.hpp"

int main()
{
    int menu = 0;
    Library lib;
    Library tmp;
    std::string author;


    while(1)
    {
        std::cout << "Menu: \n";
        std::cout << "1)Add book in library\n2)Sort by title\n3)Find by author\n4)Library output\n";
        std::cin >> menu;

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
                    std::cerr << e.what() << '\n';
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
                std::cout << "input author to find";
                std::cin >> author;
                lib.showAuthor(author);
                break;
            }
            case 4:
            {
                // добавить общий счётчик добавленных (ВООБЩЕ) книг в библиотеке(если их 0, то выбивать ecxept., иначе выводить список книг)
                try
                {
                    std::cout << lib;
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                }
                break;
            }
            case 7:
            {
                std::cout << "Good luck!\n";
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