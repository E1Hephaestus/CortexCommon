#ifndef CORTEX_COMMON_CONNECTION_HPP
#define CORTEX_COMMON_CONNECTION_HPP

#include "common/network.hpp"

struct Connection: TcpSocket{
    Connection(){
        setBlocking(false);
    }

    Connection(Connection &&) = default;

    Connection &operator=(Connection &&) = default;
};

#endif//CORTEX_COMMON_CONNECTION_HPP