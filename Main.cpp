#include "Book.h"
#include "Library.h"
#include "Member.h"
#include <iostream>

int main() {

    Book book1("1984", "George Orwell", 1949);
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);


    Library library;
    library.addBook(book1);
    library.addBook(book2);

  
    std::cout << "Library Contents:" << std::endl;
    library.displayBooks();


    Member member("John Doe", 1);


    std::cout << "Library Member Information:" << std::endl;
    member.displayInfo();

    return 0;
}
