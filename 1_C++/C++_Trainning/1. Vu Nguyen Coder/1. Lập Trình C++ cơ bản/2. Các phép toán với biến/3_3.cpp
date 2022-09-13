#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Nhap canh a: ";
        cin >> a;
    cout << "Nhap canh b: ";
        cin >> b;
    cout << "Nhap canh c: ";
        cin >> c;

    float p = (a+b+c)/2;

    cout << "Dien tich tam giac la: " << setprecision(3) << fixed << sqrt(p*(p-a)*(p-b)*(p-c)) << endl;
}