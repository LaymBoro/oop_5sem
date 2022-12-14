#pragma once
#include "Book.hpp"
#include <vector>
#include <iostream>

class Library
{
    private:
    std::vector<Book> libShelf;

    public:
    Library();
    ~Library();

    class VectorIsEmpty : public std::exception {
        const char *what() const throw();
    };
    void sortByTitle();
    std::vector<Book> findByAuthor(std::string author);
    void addBook(Book &book);
    std::vector<Book>::iterator getBegin();
    std::vector<Book>::iterator getEnd();
    void showAuthor(std::string author);
    void changeAvailable(bool av);

    friend std::ostream &operator<<(std::ostream &out, Library &lib);

};