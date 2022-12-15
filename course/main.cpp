#include <iostream>
#include <fstream>
#include <string>
#include "Library.hpp"

int input();
void fileOutput(std::vector<Book> lib);
//std::vector<Book> fileInput();

int main()
{
    int menu = 0;
    Library lib;
    Library tmp;
    Library fileTmp;
    std::string author;


    while(true)
    {
        std::cout << "Menu: \n";
        std::cout << "1)Add book in library\n2)Sort by title\n3)Find by author\n4)Library output\n5)Change book available status in lib\n6)File output\n0)Exit\n";
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
            case 6:
            {
                fileOutput(lib.getVector());
                break;
            }
            case 7:
            {
                //fileTmp = fileInput();
                break;
            }
            case 0:
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

void fileOutput(std::vector<Book> lib)
{
	std::ofstream out;
	std::string name;
	std::cout << "Enter name of file:\n>>";
	std::cin >> name;
    out.open(name.c_str());
	if (out.is_open())
	{
        for (std::vector<Book>::iterator i = lib.begin(); i != lib.end(); i++)
        {
			(*i).showForRead(out, *i) << "\n";
        }
	}
	else
	{
		std::cout << "Error! File can't open.\n";
	}
	out.close();
    name.append(".txt");
	out.open(name.c_str());
	if (out.is_open())
	{
		for (std::vector<Book>::iterator i = lib.begin(); i != lib.end(); i++)
        {
			out << (*i) << "\n";
        }
	}
	else
	{
		std::cout << "Error! File can't open.\n";
	}
	out.close();
}
// std::vector<Book> fileInput()
// {
// 	std::string fileName;
// 	std::cout << "Input file name.\n>>";
// 	std::cin >> fileName;
// 	std::vector<Book> ret;
// 	std::ifstream file;
// 	file.open(fileName.c_str());
// 	if (file.is_open())
// 	{
// 		std::string str;
// 		while (std::getline(file, str))
// 		{
// 			const char *tmp = str.c_str();
// 			ret.push_back(split(tmp));
// 		}
// 	}
// 	else
// 	{
// 		std::cout << "invalid filename\n";
// 	}
// 	file.close();
// 	return ret;
// }
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