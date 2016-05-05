#ifndef KLASA_H
#define KLASA_H

class Klasa
{
    int a;
    int *b;
public:
    Klasa();
    Klasa(int);
    ~Klasa();
    void setA(int);
    int getA();
    void incA();

    void setB(int);
    int getB();
};

#endif // KLASA_H
