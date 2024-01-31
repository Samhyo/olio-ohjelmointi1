#include "ItalianChef.h"
#include <iostream>

// Konstruktori
ItalianChef::ItalianChef(std::string name) : Chef(name) {}

// Metodi pastan tekoon
void ItalianChef::makePasta() {
    // Pastan valmistuslogiikka
    std::cout << "Italian Chef " << getName() << " is making pasta." << std::endl;
}
