#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;

    

    cout << "Ket qua: "

    if(a==b && b==c) cout << "Tam giac deu";

    if((a+b) < c) cout << "Khong ton tai";
    else if((c+b) < a) cout << "Khong ton tai";
    else if((c+a) < b) cout << "Khong ton tai";
    else if((a+b) > c && (c+b) > a && (c+a) > b) cout << "Tam giac thuong";

    if((a+b) > c && (c+b) > a && (c+a) > b){
        if(a==b || b==c || c==a) cout << "Tam giac can";
    }

    if((a+b) > c && (c+b) > a && (c+a) > b){

        if((a==b || b==c || c==a) && (a*a)) 
    }
}