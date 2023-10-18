#include <iostream>
#include <cstdlib>

using namespace std;

// funkcja do scalkowania
double f1(double x) { return -x*x-x+10; }

int main()
{
    float xp, xk, h, calka;
    int n;

    // przedzialy
    xp = -2;
    xk = 1;

    // im wieksze n tym wieksza dokladnośc (np. n=1000)
    n = 3;

    h = (xk - xp) / (float)n;

    cout << "krok: h=" << h << endl;

    calka = 0;
    for (int i=1; i<n; i++)
    {
        calka += f1(xp + i * h);
    }
    calka += f1(xp) / 2;
    calka += f1(xk) / 2;
    calka *= h;

    cout << "Wynik calkowania: " <<  calka << endl;

    system("PAUSE");

    return 0;
}
