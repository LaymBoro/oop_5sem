#include "Library.hpp"

Library::Library()
{
}

Library::~Library()
{
}

const char *Library::VectorIsEmpty::what() const throw()
{
	return "Vector is empty!\n";
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
		if (((*i).getAuthor()).compare(author) != 0) 
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

std::vector<Book>::iterator Library::getBegin()
{
   return libShelf.begin();
}

std::vector<Book>::iterator Library::getEnd()
{
	return libShelf.end();
}

void Library::showAuthor(std::string author)
{
	std::vector<Book> tmp;

	tmp = this->findByAuthor(author);

	for (std::vector<Book>::iterator i = tmp.begin(); i != tmp.end(); i++) 
	{
		std::cout << "" << (*i) << "\n";
	}
}

void Library::changeAvailable(bool av)
{
	std::string tt;
	int temp = 0;
	std::vector<Book> tmp;
	for (std::vector<Book>::iterator i = this->getBegin(); i != this->getEnd(); i++) 
	{
		if ((*i).getAvailable() != av) 
		{
			std::cout << (*i);
			tmp.push_back(*i);
		}
	}
	std::cout << "";
	std::cin >> temp;
	std::vector<Book>::iterator j = this->getBegin() + temp - 1;
	for(std::vector<Book>::iterator i = this->getBegin(); i != this->getEnd(); i++)
	{
		if (i == j) 
		{
			(*i).setAvailable(av);
		}
	}
}

std::ostream &operator<<(std::ostream &out, Library &lib)
{
	if (lib.libShelf.size() == 0)
		throw ;
	for (std::vector<Book>::iterator i = lib.getBegin(); i != lib.getEnd(); i++) 
	{
		std::cout << " " << (*i) << "\n";
	}

	return out;
}
