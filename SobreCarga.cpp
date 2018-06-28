#include <iostream>
using namespace std;

class Pareja {
public:
    double a, b;
    Pareja(const double a,const double b)
    {
        this->a = a;
        this->b = b;
    }
};

// Sobrecarga del operador +
Pareja operator +(const Pareja &p1,const Pareja &p2)
{
    Pareja res( p1.a + p2.a, p1.b + p2.b );
    return res;
}

int main()
{
    Pareja A(51.56, 85.2 );
    Pareja B(2.69, 24.2 );
    Pareja C = A + B;

    cout << "Los valores de A son: " << A.a << "  y  " << A.b << "\n";
    cout << "Los valores de B son: " << B.a << "  y  " << B.b << "\n";
    cout << "Los valores de C son: " << C.a << "  y  " << C.b << "\n";

    return 0;
}
