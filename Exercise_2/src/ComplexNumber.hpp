#ifndef __COMPLEXNUMBER_H // if not defined (header guards)
#define __COMPLEXNUMBER_H

#include <iostream>
#include <math.h>

using namespace std;
struct ComplexNumber{
    double realPart;
    double imaginaryPart;

    ComplexNumber():
        realPart(0.0),
        imaginaryPart(0.0)
    {

    }
    ComplexNumber(double a, double b):
        realPart(a),
        imaginaryPart(b)
    {

    }
};

ComplexNumber operator+(const ComplexNumber& z1, const ComplexNumber& z2);

bool operator==(const ComplexNumber& z1, const ComplexNumber& z2);

ostream& operator<<(ostream& os, const ComplexNumber& z);


#endif
