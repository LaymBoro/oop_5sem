#include "Book.hpp"

Book::Book()
{
    title = "none";
    author = "none"; 
    publisher = "none";
    year = 0; 
    shelfNumber = 0;
    available = false;
}

Book::Book(std::string title, std::string author, std::string publisher, int year, int shelfNumber, bool available)
{
    this->title = title;
    this->author = author;
    this->publisher = publisher;
    this->year = year;
    this->shelfNumber = shelfNumber;
    this->available = available;
}

Book::Book(const Book &book)
{
    this->title = book.title;
    this->author = book.author;
    this->publisher = book.publisher;
    this->year = book.year;
    this->shelfNumber = book.shelfNumber;
    this->available = book.available;
}

Book::~Book()
{
}

std::string Book::getTitle()
{
    return title;
}

std::string Book::getAuthor()
{
    return author;
}

std::string Book::getPublisher()
{
    return publisher;
}

int Book::getYear()
{
    return year;
}

int Book::getShelfNumber()
{
    return shelfNumber;
}

bool Book::getAvailable()
{
    return available;
}

std::string Book::presentAvailable()
{
    if(available)
    {
        return "available in library";
    }
    else
    {
        return "on hands";
    }
}

void Book::setTitle(std::string title)
{
    this->title = title;
}

void Book::setAuthor(std::string author)
{
    this->author = author;
}

void Book::setPublisher(std::string publisher)
{
    this->publisher = publisher;
}

void Book::setYear(int year)
{
    this->year = year;
}

void Book::setShelfNumber(int shelfNumber)
{
    this->shelfNumber = shelfNumber;
}

void Book::setAvailable(bool available)
{
    this->available = available;
}

std::ostream &operator << (std::ostream &out, Book book)
{
    std::cout << "Title: " << book.getTitle() << "Author: " << book.getAuthor() << "Publisher: " << book.getPublisher() << "Year: " << book.getYear() << "Shelf number: " << book.getShelfNumber() << "Available in lib: " << book.presentAvailable() << "\n";
}

std::istream &operator>>(std::istream &in, Book &book)
{

    std::cout << "Title: ";
    in >> book.title;
    std::cout << "\nAuthor: ";
    in >> book.author;
    std::cout << "\nPublisher: ";
    in >> book.publisher;
    std::cout << "\nYear: ";
    in >> book.year;
    std::cout << "\nShelf number: ";
    in >> book.shelfNumber;
    std::cout << "\nAvailable: ";
    in >> book.available;

    return in;
}
