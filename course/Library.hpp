#pragma once
#include "Book.hpp"
#include <vector>

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

};