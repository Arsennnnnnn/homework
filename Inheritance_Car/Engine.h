#ifndef ENGINE_H
#define ENGINE_H

#include <string>

class Engine {
private:
    int m_horsePower;
    std::string m_type;
public:
    Engine() = default;
    Engine(int horsePower, std::string type);

    void start();
    void stop();

    int getHorsePower() const;
    std::string getType() const;
};

#endif // ENGINE_H
