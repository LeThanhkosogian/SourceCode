#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Nhap lan luot so luong 6 mat hang: ";
    int h1, h2, h3, h4, h5, h6;
    cin >> h1 >> h2 >> h3 >> h4 >> h5 >> h6;
    float pay = 100*h1 + 150*h2 + 120*h3 + 90*h4 + 130*h5 + 140*h6;
    int dem = h1 + h2 + h3 + h4 + h5 + h6;

    cout << "So tien phai tra la: ";
    if(dem >= 4 && h6>=2 && pay>=500){
        pay = pay*0.8;
        cout << pay << endl;
    }
    else if(dem >= 4 && h6>=2){
        pay = pay-40;
        cout << pay << endl;
    }
    else if((dem >= 4 && pay>=500) || (h6>=2 && pay>=500)){
        pay = pay*0.85;
        cout << pay << endl;
    }
    else if(dem >= 4){
        pay = pay-20;
        cout << pay << endl;        
    }
    else if(h6>=2){
        pay = pay-30;
        cout << pay << endl;        
    }
    else if(pay>=500){
        pay = pay*0.9;
        cout << pay << endl;        
    }
    else cout << pay << endl;
}