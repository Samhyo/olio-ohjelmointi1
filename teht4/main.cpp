// main.cpp
#include <QCoreApplication>
#include "asunto.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Asunto asunto;
    asunto.maarita();

    double peruskulutus = 1; // Hinta
    double kokonaiskulutus = asunto.laskeKulutus(peruskulutus);

    qDebug() << "Asunnon kulutus, kun hinta=" << peruskulutus << "on" << kokonaiskulutus;

    return a.exec();
}
