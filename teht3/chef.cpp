#include "Chef.h"
#include <iostream>

// Konstruktori
Chef::Chef(std::string name) : name(name) {}

// Metodi salaatintekoon
void Chef::makeSalad() {
    // Saladin valmistuslogiikka
    std::cout << "Chef " << name << " is making a salad." << std::endl;
}

// Metodi keiton tekoon
void Chef::makeSoup() {
    // Keiton valmistuslogiikka
    std::cout << "Chef " << name << " is making soup." << std::endl;
}

// Getter-metodi nimen hakemiseen
std::string Chef::getName() {
    return name;
}
