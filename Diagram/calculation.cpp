#include "calculation.h"
#include <QtMath>

Calculation::Calculation()
{
    N = 0;
    nu = 0;
    R = 0;
    radius = 0;
    h = 0;
    nu0 = 4 * M_PI * pow(10, -7);
    L = 0;

    Dn = 0;
    p = 0;
    D = 0;
    v = 0;
    nu_Dn = 0;
    Rc = 0;
}

double Calculation::Inductance(double N, double nu, double R, double radius, double h)
{
    L = pow(N, 2)
        * ((nu0 * nu * h) / (2 * M_PI))
        * log(R / radius);

    return L;
}

double Calculation::definition_Dn(double p, double D, double v, double nu_Dn, double Rc)
{

    double Re = (p * D * v) / nu_Dn;
    Dn = Re * sqrt(D / (2 * Rc));

    return Dn;
}

