#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    float x = 2.0;
    float y = 3.0;
        cout << setprecision(2) << fixed << (x*y + x/y) << endl;
        cout << setprecision(3) << fixed << (x + 1/(x+1/(x+1/(x+y)))) << endl;
        cout << setprecision(2) << fixed << sqrt(pow(3*x+2*y, 2)*pow(5*x+1, 3)) << endl;
}