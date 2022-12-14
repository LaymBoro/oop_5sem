#include "Library.hpp"

Library::Library()
{
}

Library::~Library()
{
}

void Library::sortByTitle()
{
    for (std::vector<Book>::iterator i = libShelf.begin(); i != libShelf.end(); i++) 
    {
        for (std::vector<Book>::iterator j = i + 1; j != libShelf.end(); j++) 
        {
            if (((*i).getTitle()).compare(((*j).getTitle())) > 0) 
            {
                std::swap((*j), (*i));
            }
        }
    }
}

std::vector<Book> Library::findByAuthor(std::string author)
{
    std::vector<Book> authorLib;
    for (std::vector<Book>::iterator i = libShelf.begin(); i != libShelf.end(); i++) 
    {
        if (((*i).getTitle()).compare(author) != 0) 
        {
            authorLib.push_back((*i));
        }
    }

    return authorLib;
}

void Library::addBook(const Book &book)
{
    libShelf.push_back(book);

}

std::ostream &operator << (std::ostream &out, std::vector<Book> &libShelf)
{
    for (std::vector<Book>::iterator i = libShelf.begin(); i != libShelf.end(); i++) 
    {
        std::cout << "" << (*i) << "\n";
    }

    return out;
}
