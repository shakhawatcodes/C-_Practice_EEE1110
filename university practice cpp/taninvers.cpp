#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    double x, sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    // Validation for n
    if (n < 0)
        n = -n;
    if (n == 0)
        n = 1;

    cout << "Enter the value of x within range [-1,1]: ";
    cin >> x;

    // Validation for x
    if (x < -1)
        x = -1;
    else if (x > 1)
        x = 1;

    cout << "\nSeries:\n";

    for (int i = 0; i < n; i++)
    {
        int power = 2 * i + 1;
        double term = pow(x, power) / power;

        if (i % 2 == 0)
        {
            sum += term;
            cout << x << "^" << power << "/" << power;
        }
        else
        {
            sum -= term;
            cout << "-" << x << "^" << power << "/" << power;
        }

        if (i != n - 1)
            cout << "+";
    }

    cout << endl;
    cout << "LHS = tan^-1(" << x << ") = " << atan(x) << endl;
    cout << "RHS = " << sum << endl;

    return 0;
}