//
// Created by yazuk on 03.12.24.
//

#include "Unit.h"
#include <iostream>

Unit::Unit() : name("") {
    std::cout << "Default constructor" << std::endl;
}

Unit::Unit(const Unit &rhs) : name(""), id(rhs.id), type(rhs.type) {
    std::cout << "Copy constructor" << std::endl;
}

Unit::Unit(const Unit &&rhs) : name(rhs.name), id(rhs.id), type(rhs.type) {
    std::cout << "Move constructor" << std::endl;
}

Unit::~Unit() {
    std::cout << "Destructor Unit" << std::endl;
}

int Unit::init() noexcept {
    name = "no_name";
    id = 0;
    type = UNIT;
    return 0;
}

bool Unit::operator == (const Unit &rhs) const noexcept {
    return id == rhs.id;
}
