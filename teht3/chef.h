#ifndef CHEF_H
#define CHEF_H

#include <string>

class Chef {
private:
    std::string name;

public:
    // Konstruktori
    Chef(std::string name);

    // Metodit
    void makeSalad();
    void makeSoup();
    std::string getName();
};

#endif // CHEF_H
