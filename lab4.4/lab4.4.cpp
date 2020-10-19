#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y, r, xp, xk, dx;

    cout << "Введіть значення 'r':"; cin >> r;
    cout << "Введіть значення 'хp':"; cin >> xp;
    cout << "Введіть значення 'хk':"; cin >> xk;
    cout << "Введіть значення 'dx':"; cin >> dx;

    cout << fixed;
    cout << "--------------------------------" << endl;
    cout << "|" << setw(7) << "x=xp" << setw(4) << "|";
    cout << setw(5) << "R" << setw(5) << "|";
    cout << setw(5) << "y" << setw(5) << "|" << endl;
    cout << "--------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -r)
            y = r;
        else
            if (-r <= x && x <= r)
                y = -sqrt(r * r - x * x) + r;
            else
                if (r <= x && x < 6)
                    y = (-3 * x - r * x + 9 * r) / (6 - r);
                else
                    y = x - 9;
        cout << "|" << setw(7) << setprecision(2) << x << setw(4) << "|";
        cout << setw(7) << setprecision(2) << r << setw(3) << "|";
        cout << setw(7) << setprecision(2) << y << setw(3) << "|" << endl;
        x += dx;
    }
    cout << "--------------------------------" << endl;

    cin.get();
    return 0;
}

