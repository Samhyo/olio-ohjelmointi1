#include "Chef.h"
#include "ItalianChef.h"

int main() {
    // Luo Chef- ja ItalianChef-oliot
    Chef chef("Jyrki");
    ItalianChef italianChef("Mario");

    // Kutsu jäsenfunktioita ja tulosta ruokaa
    chef.makeSalad();
    italianChef.makePasta();
    chef.makeSoup();

    return 0;
}
