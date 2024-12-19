//
// Created by yazuk on 03.12.24.
//

#include "Unit.h"

Unit::Unit() : name("") {

}

Unit::Unit(const Unit& rhs) : name(""), id(rhs.id), type(rhs.type) {

}

Unit::Unit(const Unit&&rhs) : name(rhs.name), id(rhs.id), type(rhs.type) {

}

Unit::~Unit() {

}

int Unit::init() noexcept {
    id = 0;
    type = 0;
    return 0;
}


