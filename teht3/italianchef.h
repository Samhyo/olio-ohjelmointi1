#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

class ItalianChef : public Chef {
public:
    // Konstruktori
    ItalianChef(std::string name);

    // Metodi pastan tekoon
    void makePasta();
};

#endif // ITALIANCHEF_H
