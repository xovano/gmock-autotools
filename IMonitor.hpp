#ifndef IMONITOR_HPP
#define IMONITOR_HPP

class IListener;

class IMonitor {
public:
    IMonitor() = default;
    virtual ~IMonitor() = default;
    virtual void registerListener(const IListener&) = 0;
};

#endif
