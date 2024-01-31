#include "ItalianChef.h"
#include <iostream>

ItalianChef::ItalianChef(std::string chefName) : Chef(chefName) {
    std::cout << "Chef " << name << " constructor" << std::endl;
}

ItalianChef::~ItalianChef() {
    std::cout << "Chef " << name << " destructor" << std::endl;
}

void ItalianChef::makePasta() {
    std::cout << "Chef " << name << " makes pasta" << std::endl;
}
