#include <bits/stdc++.h>

using namespace std;

int main()
{
    float x, y, z;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    cout << "Nhap z: ";
    cin >> z;

    cout << "Ket qua 1: So lon nhat la ";
    if(x > y && x > z) cout << x << endl;
    else if(y > z) cout << y << endl;
    else cout << z << endl;

    cout << "Ket qua 2: So be nhat la ";
    if(x < y && x < z) cout << x << endl;
    else if(y < z) cout << y << endl;
    else cout << z << endl;    

    if(x > 0 && y > 0 && z > 0) cout << "Ket qua 3: Ca 3 so cung dau" << endl;
    else cout << "Ket qua 3: 3 so khong cung dau" << endl;

    cout << "Ket qua 4: ";
    if((x*y)<0) cout << "(" << x << "," << y << ")" << ",";
    if((x*z)<0) cout << "(" << x << "," << z << ")" << ",";
    if((y*z)<0) cout << "(" << y << "," << z << ")" << ".";
    else cout << "Ko co cap so nao trai dau";

}