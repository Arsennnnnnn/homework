#ifndef IREMOTE_H
#define IREMOTE_H

class IRemote {
public:
    IRemote() = default;
    ~IRemote() = default;
    virtual void TurnOn() = 0;
    virtual void TurnOf() = 0;
    virtual void increase() = 0; //for tv remote increase volume, for cooler increase the temperature etc…
    virtual void decrease() = 0; //just like the increase this one for decreasing.
    virtual void IsOn() = 0;
};

#endif //IREMOTE_H
