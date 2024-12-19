#include <iostream>
#include <set>
#include <cassert>


int main() {
    std::set<int32_t> s_uint32;

    auto [ it1 , b1 ] = s_uint32.insert(12);
    assert(*it1 == 12 && b1 == true);



    return 0;
}
