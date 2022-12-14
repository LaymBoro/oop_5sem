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

    void sortByTitle();
    std::vector<Book> findByAuthor(std::string author);
    void addBook(const Book &book);

    friend std::ostream &operator << (std::ostream &out, std::vector<Book> &libShelf);

};