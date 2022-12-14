#pragma once
#include <iostream>

class Book
{
    private:

    std::string title, author, publisher;
    int year, shelfNumber;
    bool available;

    public:

    class AvailableNotAccept : public std::exception {
        const char *what() const throw();
    };
    Book();
    Book(std::string title, std::string author, std::string publisher, int year, int shelfNumber, bool available);
    Book(const Book &book);
    ~Book();

    std::string getTitle();
    std::string getAuthor();
    std::string getPublisher();
    int getYear();
    int getShelfNumber();
    bool getAvailable();
    std::string presentAvailable();
    void setTitle(std::string title);
    void setAuthor(std::string author);
    void setPublisher(std::string publisher);
    void setYear(int year);
    void setShelfNumber(int shelfNumber);
    void setAvailable(bool available);

    friend std::istream &operator>>(std::istream &out, Book &book);
    friend std::ostream &operator<<(std::ostream &out, Book &book);
};