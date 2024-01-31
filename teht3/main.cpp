#include "Cheff.h"

int main() {
    // Luodaan kaksi Cheff-oliota
    Cheff gordonRamsay("Gordon Ramsay");
    Cheff anthonyBourdain("Anthony Bourdain");

    // Käytetään kumpaakin oliota
    gordonRamsay.makeSalad();
    gordonRamsay.makeSoup();
    anthonyBourdain.makeSalad();
    anthonyBourdain.makeSoup();

    return 0;
}
