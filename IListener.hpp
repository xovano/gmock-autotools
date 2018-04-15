#ifndef ILISTENER_HPP
#define ILISTENER_HPP

class IListener {
public:
    IListener() = default;
    virtual ~IListener() = default;
    virtual onEvent() = 0;
};

#endif
