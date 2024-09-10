#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int publicationYear;

public:

    Book(const std::string &title, const std::string &author, int publicationYear);


    std::string getTitle() const;
    std::string getAuthor() const;
    int getPublicationYear() const;


    void setTitle(const std::string &title);
    void setAuthor(const std::string &author);
    void setPublicationYear(int publicationYear);


    void displayInfo() const;
};

#endif
