#ifndef CHEFF_H
#define CHEFF_H

#include <string>

class Cheff {
private:
    std::string name;

public:
    // Konstruktori
    Cheff(std::string name);

    // Jäsenfunktiot
    void makeSalad();
    void makeSoup();
    std::string getName();

    // Destruktori
    ~Cheff();
};

#endif // CHEFF_H
