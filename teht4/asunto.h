// asunto.h
#ifndef ASUNTO_H
#define ASUNTO_H

#include <QDebug>

class Asunto {
public:
    Asunto();
    int asukasMaara;
    int neliot;

    void maarita();
    double laskeKulutus(double peruskulutus);
};

#endif // ASUNTO_H
