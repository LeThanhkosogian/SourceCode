#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Nhap ki tu in thuong trong bang chu cai: ";
    char ki_tu;
    cin >> ki_tu;
    cout << "1. Ma ASCII la: " << (int)ki_tu << endl;
    cout << "2. Ki tu dung sau la: " << ki_tu+1 << endl;
    cout << "Ma ASCII tuong ung la: " << (int)(ki_tu+1) << endl;
    cout << "3. Ki tu in hoa tuong ung la: " << (char)(ki_tu-32) << endl;
}
