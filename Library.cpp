#include "Library.h"
#include <iostream>


void Library::addBook(const Book &book) {
    books.push_back(book);
}


void Library::displayBooks() const {
    for (const auto &book : books) {
        book.displayInfo();
        std::cout << std::endl;
    }
}
