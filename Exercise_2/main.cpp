#include "ComplexNumber.hpp"

ComplexNumber conjugate(ComplexNumber& z) {
    double a = z.realPart;
    double b = -z.imaginaryPart;
    ComplexNumber zbar(a,b);
    return zbar;
}

int main()
{
    ComplexNumber z(1,2);
    cout << z+conjugate(z) << endl;
    return 0;
}
