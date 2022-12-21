#include <iostream>
#include <fstream>
#include <string>
#include "Library.hpp"

int input();
void fileOutput(std::vector<Book> lib);
void fileInput(Library &lib);

int main()
{
    int menu = 0;
    Library lib;
    Library tmp;
    std::string author;


    while(true)
    {
        std::cout << "Menu: \n";
        std::cout << "1)Add book in library\n2)Sort by title\n3)Find by author\n4)Library output\n5)Change book available status in lib\n6)File output\n7)File input\n0)Exit\n";
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
                fileInput(lib);
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
	std::cout << "Enter name of file:\n";
	std::cin >> name;
    out.open(name.c_str());
	if (out.is_open())
	{
        for (std::vector<Book>::iterator i = lib.begin(); i != lib.end(); i++)
        {
			out << (*i).getTitle() << " " << (*i).getAuthor() << " " << (*i).getPublisher() << " " << (*i).getYear() << " " << (*i).getShelfNumber() << " " << (*i).getAvailable() << "\n";
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
void fileInput(Library& lib)
{
	std::string fileName;
	std::cout << "Enter file name for file input.\n";
	std::cin >> fileName;
	std::vector<Book> ret;
	std::ifstream in;
	in.open(fileName.c_str());
	if (in.is_open() == 1)
	{
		std::string title, author, publisher, year, shelfNumber, available;
		while (in >> title >> author >> publisher >> year >> shelfNumber >> available)
		{
			Book tmp;
            
            tmp.setTitle(title);
			tmp.setAuthor(author);
            tmp.setPublisher(publisher);
            tmp.setYear(stoi(year));
            
            tmp.setShelfNumber(stoi(shelfNumber));
            tmp.setAvailable(stoi(available));
            ret.push_back(tmp);
		}
	}
	else
	{
		std::cout << "invalid filename\n";
	}
	in.close();
	for (std::vector<Book>::iterator i = ret.begin(); i != ret.end(); i++) 
	{
		lib.addBook((*i));
	}

}
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