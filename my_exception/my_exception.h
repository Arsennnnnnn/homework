#ifndef MY_EXCEPTION_H
#define MY_EXCEPTION_H

#include <exception>

class my_exception : public std::exception {
private:
    std::string message;
public:
    explicit my_exception(const std::string& msg)
        : message(msg){}

    const char* what() const noexcept override {
        return message.c_str();
    }

    virtual ~my_exception() noexcept = default;
};


#endif //MY_EXCEPTION_H
