#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.1415926535898

int main()
{
    double a, b, c, d, delta, k;
    cin >> a >> b >> c >> d;
    delta = pow(b, 2) - 3 * a * c;
    delta = pow(b, 2) - 3 * a * c;
    k = (9 * a * b * c - 2 * pow(b, 3) - 27 * pow(a, 2) * d) / (2 * sqrt(pow(fabs(delta), 3)));


    if (delta > 0)
    {
        if (fabs(k) <= 1)
        {
            int x1 = (2 * sqrt(delta) * cos((acos(k) / 3)) - b) / (3 * a);
            int x2 = (2 * sqrt(delta) * cos((acos(k) / 3 - (2 * PI / 3))) - b) / (3 * a);
            int x3 = (2 * sqrt(delta) * cos((acos(k) / 3 + (2 * PI / 3))) - b) / (3 * a);
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
            cout << "x3 = " << x3 << endl;
            return 0;
        }

        float x = ((sqrt(delta) * abs(k)) / (3 * a * k)) * (pow(abs(k) + sqrt(pow(k, 2) - 1), 1 / 3) + pow(abs(k) - sqrt(pow(k, 2) - 1), 1 / 3)) - (b / (3 * a));
        cout << "pt co nghiem duy nhat: " << x;
        return 0;
    }

    if (delta == 0)
    {
        int x = (-b + pow(pow(b, 3) - 27 * pow(a, 2) * d, 1 / 3)) / (3 * a);
        cout << "pt co 2 nghiem boi: " << x;
        return 0;
    }

    int x = (sqrt(abs(delta)) / (3 * a)) * (pow(k + sqrt(pow(k, 2) + 1), 1 / 3) + pow(k - sqrt(pow(k, 2) + 1), 1 / 3)) - (b / (3 * a));
    cout << "pt co nghiem duy nhat: " << x;

    return 0;
}