#include <iostream>
#include <cmath>

using namespace std;

int gcd(int m, int n)
{
    while (m % n != 0)
    {
        int oldm = m;
        int oldn = n;

        m = oldn;
        n = oldm % oldn;
    }
    return n;
}

class Fraction
{
public:
    Fraction(int top, int bottom)
    {
        int common = gcd(top, bottom);
        num = top / common;
        den = bottom / common;
    }
    Fraction(int top)
    {
        num = top;
        den = 1;
    }
    Fraction()
    {
        num = 1;
        den = 1;
    }
    Fraction operator+(Fraction otherFrac)
    {
        int newnum = num * otherFrac.den + den * otherFrac.num;
        int newden = den * otherFrac.den;

        return Fraction(newnum, newden);
    }
    Fraction operator-(Fraction otherFrac)
    {
        int newnum = num * otherFrac.den - den * otherFrac.num;
        int newden = den * otherFrac.den;

        return Fraction(newnum, newden);
    }
    Fraction operator*(Fraction otherFrac)
    {
        int newnum = num * otherFrac.num;
        int newden = den * otherFrac.den;

        return Fraction(newnum, newden);
    }
    Fraction operator/(Fraction otherFrac)
    {
        int newnum = num * otherFrac.den;
        int newden = den * otherFrac.num;

        return Fraction(newnum, newden);
    }
    bool operator==(Fraction otherFrac)
    {
        int firstnum = num * otherFrac.den;
        int secondnum = otherFrac.num * den;

        return firstnum == secondnum;
    }
    bool operator>(Fraction otherFrac)
    {
        int firstnum = num * otherFrac.den;
        int secondnum = otherFrac.num * den;

        return firstnum > secondnum;
    }
    bool operator>=(Fraction otherFrac)
    {
        int firstnum = num * otherFrac.den;
        int secondnum = otherFrac.num * den;

        return firstnum >= secondnum;
    }
    bool operator<(Fraction otherFrac)
    {
        int firstnum = num * otherFrac.den;
        int secondnum = otherFrac.num * den;

        return firstnum < secondnum;
    }
    bool operator<=(Fraction otherFrac)
    {
        int firstnum = num * otherFrac.den;
        int secondnum = otherFrac.num * den;

        return firstnum <= secondnum;
    }
    bool operator!=(Fraction otherFrac)
    {
        int firstnum = num * otherFrac.den;
        int secondnum = otherFrac.num * den;

        return firstnum != secondnum;
    }

    int getNum()
    {
        return num;
    }

    int getDen()
    {
        return den;
    }

    friend ostream &operator<<(ostream &stream, const Fraction &fraction);

private:
    int num, den;
};

ostream &operator<<(ostream &stream, const Fraction &fraction)
{
    stream << fraction.num << "/" << fraction.den;

    return stream;
}

int main()
{
    Fraction x(1.2, 2);
    Fraction y(2, 4);
    cout << x << " + " << y << " = " << x + y << endl;
    if (x == y)
    {
        cout << "x is equal y" << endl;
    }
    else
    {
        cout << "x is not equal y" << endl;
    }

    cout << "The numerator of x is " << x.getNum() << ", the denominator is " << x.getDen() << endl;
    cout << x << " - " << y << " = " << x - y << endl;
    cout << x << " * " << y << " = " << x * y << endl;
    cout << x << " / " << y << " = " << x / y << endl << endl;

    cout << (x<=y) << endl;
    cout << (x<y)<< endl;
    cout << (x>y)<< endl;
    cout << (x>=y) << endl;
    cout << (x!=y) << endl;
    return 0;
}
