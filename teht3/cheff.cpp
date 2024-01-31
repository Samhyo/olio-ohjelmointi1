#include "Cheff.h"
#include <iostream>

// Konstruktori
Cheff::Cheff(std::string name) : name(name) {
    std::cout << "Chef " << name << " konstruktori" << std::endl;
}

// Jäsenfunktio salaatintekoon
void Cheff::makeSalad() {
    std::cout << "Chef " << name << " makes salad" << std::endl;
}

// Jäsenfunktio keiton tekoon
void Cheff::makeSoup() {
    std::cout << "Chef " << name << " makes soup" << std::endl;
}

// Getter-funktio nimen hakemiseen
std::string Cheff::getName() {
    return name;
}

// Destruktori
Cheff::~Cheff() {
    std::cout << "Chef " << name << " destruktori" << std::endl;
}
