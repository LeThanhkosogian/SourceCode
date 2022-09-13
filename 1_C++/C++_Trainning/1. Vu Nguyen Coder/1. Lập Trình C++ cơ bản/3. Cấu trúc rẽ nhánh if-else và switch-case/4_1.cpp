#include <bits/stdc++.h>

using namespace std;

int main()
{
    float x, y;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;

    cout << "Ket qua";

    if(x != 0) cout << "x khac 0" << endl;
    else cout << "x bang 0" << endl;

    if(y != 0) cout << "y khac 0" << endl;
    else cout << "y bang 0" << endl;

    if((x*y) > 0) cout << "Hai so cung dau" << endl;
    else if((x*y) < 0) cout << "Hai so trai dau" << endl;
}