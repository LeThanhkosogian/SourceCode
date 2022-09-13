#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Nhap so km: ";
    int km;
    cin >> km;
    int pay;

    cout << "So tien phai tra: ";
    if(km==1){
        pay = 15000;
        cout << pay;
    }
    else if (km >= 2 && km <= 30){
        pay = 15000 + (km-1)*13000;
        cout << pay;
    }
    else if (km >= 30){
        pay = 15000 + 29*13000 + (km-30)*10000;
        cout << pay;
    }
}