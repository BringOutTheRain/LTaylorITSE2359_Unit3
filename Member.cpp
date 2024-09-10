#include "Member.h"
#include <iostream>


Member::Member(const std::string &name, int id) : name(name), id(id) {}


std::string Member::getName() const { return name; }
int Member::getId() const { return id; }


void Member::setName(const std::string &name) { this->name = name; }
void Member::setId(int id) { this->id = id; }


void Member::displayInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "ID: " << id << std::endl;
}
