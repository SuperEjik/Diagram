#ifndef CALCULATION_H
#define CALCULATION_H


class Calculation
{
public:
    Calculation();

public:
    double N;
    double nu;
    double R;
    double radius;
    double h;
    double nu0;

    double p;
    double D;
    double v;
    double nu_Dn;
    double Rc;
    double Re;

    double Inductance(double, double, double, double, double);
    double definition_Dn(double, double, double, double, double);

private:
    double L, Dn;
};

#endif // CALCULATION_H
