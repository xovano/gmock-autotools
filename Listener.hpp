#ifndef LISTENER_HPP
#define LISTENER_HPP

#include "IListener.hpp"

class Listener : public IListener {
public:
    void onEvent() override;
};

#endif
