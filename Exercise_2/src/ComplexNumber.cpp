#include "ComplexNumber.hpp"
#include <iostream>
#include <math.h>

ComplexNumber operator+(const ComplexNumber& z1, const ComplexNumber& z2) {
    double a = z1.realPart+z2.realPart;
    double b = z1.imaginaryPart+z2.imaginaryPart;
    ComplexNumber sum(a,b);
    return sum;
}

bool operator==(const ComplexNumber& z1, const ComplexNumber& z2) {
    double a1 = z1.realPart;
    double b1 = z1.imaginaryPart;
    double a2 = z2.realPart;
    double b2 = z2.imaginaryPart;
    if((fabs(a1-a2)/fabs(a1) < 2.2e-16 || fabs(a1-a2)/fabs(a2)<2.2e-16) && (fabs(b1-b2)/fabs(b1) < 2.2e-16 || fabs(b1-b2)/fabs(b2)<2.2e-16)) {
        return true;
    }
    return false;
}

ostream& operator<<(ostream& os, const ComplexNumber& z) {
    double a = z.realPart;
    double b = z.imaginaryPart;
    if(b >= 0.0) {
        os << a << "+" << b << "i";
        return os;
    }
    os << a << b << "i";
    return os;
}
