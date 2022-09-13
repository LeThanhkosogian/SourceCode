#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    cout << "Nhap x: ";
    cin >> x;
    bool a = x >= 0; cout << a << endl;
    bool b = (x>=-1 && x<=2) || (x>=4 && x<=6); cout << b << endl;
    bool c = (x>-2 && x<2) || x==5; cout << c << endl;
    bool d = (x>4 && x<=0) || x>4; cout << d << endl;
}
