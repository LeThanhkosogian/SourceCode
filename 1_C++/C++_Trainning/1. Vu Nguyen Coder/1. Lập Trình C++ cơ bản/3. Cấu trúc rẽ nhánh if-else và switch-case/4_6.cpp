#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Nhap n: ";
    int n;
    cin >> n;
    int sqr = sqrt(n);
    if(sqr*sqr == n) cout << "Ket qua: n la so chinh phuong";
    else cout << "Ket qua: n ko phai so chinh phuong";
}