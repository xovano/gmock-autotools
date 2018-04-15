#include "Listener.hpp"
#include <iostream>

void Listener::onEvent() {
    std::cout << __func__ << std::endl;
}

