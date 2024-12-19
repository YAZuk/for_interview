//
// Created by yazuk on 03.12.24.
//

#ifndef UNIT_H
#define UNIT_H
#include <sys/socket.h>
#include <map>
#include <string>
#include <unordered_map>
#include <uuid/uuid.h>

class Unit {
public:
    explicit Unit();

    Unit(const Unit &rhs);

    Unit(const Unit &&rhs);

    virtual ~Unit();

    [[nodiscard]] virtual int init() noexcept;

    bool operator==(const Unit &rhs) const noexcept {
        return id == rhs.id;
    }

private:
    u_int32_t id = 0;
    u_int32_t type = 0;
    std::string name;
};


#endif //UNIT_H
