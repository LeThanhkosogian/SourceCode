#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
char c = 'b';
bool b = (c < 'c') || !(c > 'a') && (c != 'b') && (c + 1 >= 'd');
cout << b;
}
