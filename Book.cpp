#include "Book.h"
#include <iostream>


Book::Book(const std::string &title, const std::string &author, int publicationYear)
    : title(title), author(author), publicationYear(publicationYear) {}


std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
int Book::getPublicationYear() const { return publicationYear; }


void Book::setTitle(const std::string &title) { this->title = title; }
void Book::setAuthor(const std::string &author) { this->author = author; }
void Book::setPublicationYear(int publicationYear) { this->publicationYear = publicationYear; }


void Book::displayInfo() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Publication Year: " << publicationYear << std::endl;
}
