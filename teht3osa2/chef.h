#ifndef CHEF_H
#define CHEF_H

#include <string>

class Chef {
protected:
    std::string name;

public:
    Chef(std::string chefName);
    virtual ~Chef();
    void makeSalad();
    void makeSoup();
    std::string getName();
};

#endif // CHEF_H
