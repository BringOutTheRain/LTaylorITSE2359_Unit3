#ifndef MEMBER_H
#define MEMBER_H

#include <string>

class Member {
private:
    std::string name;
    int id;

public:

    Member(const std::string &name, int id);


    std::string getName() const;
    int getId() const;


    void setName(const std::string &name);
    void setId(int id);


    void displayInfo() const;
};

#endif
