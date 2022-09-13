#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cout << "Nhap a: ";
    cin >> a; 
    int b;
    cout << "Nhap b: ";
    cin >> b;  

    cout << "UCLN la: " << __gcd(a, b) << endl;
    cout << "BCNN la: " << (a*b)/__gcd(a, b) << endl; 
}