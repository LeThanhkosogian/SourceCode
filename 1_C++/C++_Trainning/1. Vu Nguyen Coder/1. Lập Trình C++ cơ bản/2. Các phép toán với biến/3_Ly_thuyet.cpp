#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{   
    cout << "Nhap gio: ";
    int gio;
    cin >> gio;
    cout << "Nhap phut: ";
    int phut;
    cin >> phut;
    cout << "Nhap giay: ";
    int giay;
    cin >> giay;

    if((0<=gio && gio<=23) && (0<=phut && phut<=59) && (0<=giay && giay<=59)) cout << "Ket qua: Hop le";
    else cout << "Ket qua: Khong hop le";
}
    /*  stoi(string1)
        stof(string2)
        stod(string3)
        to_string(numbers or char)
    */