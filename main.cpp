#include <iostream>
#include <set>
#include <cassert>
#include <exception>

#include "Unit.h"



int main() {

    std::set<int32_t> s_uint32;
    auto [ it1 , b1 ] = s_uint32.insert(12);
    assert(*it1 == 12 && b1 == true);

    Unit* unit_noname = new Unit;
    delete unit_noname;



    return 0;
}
