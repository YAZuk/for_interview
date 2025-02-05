//
// Created by yazuk on 03.12.24.
//

#include "Unit.h"
#include <iostream>

Unit::Unit() : name("") {

}

Unit::Unit(const Unit& rhs) : name(""), id(rhs.id), type(rhs.type) {

}

Unit::Unit(const Unit&&rhs) : name(rhs.name), id(rhs.id), type(rhs.type) {

}

Unit::~Unit() {
    std::cout << "Destructor Unit" << std::endl;
}

int Unit::init() noexcept {
    id = 0;
    type = 0;
    return 0;
}


