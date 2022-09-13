#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    bool a = true; // Tôi chén Ngọc Trinh
    bool b = true; // Tôi chén Maria Ozawa
    
    bool c = a && b; // Tôi chén cả Ngọc Trinh và Maria Ozawa rồi
    bool d = a || b; // Tôi chén ít nhất 1 trong 2 người là Ngọc Trinh hoặc Maria Ozawa
    bool e = a && !b; // Tôi chỉ chén Ngọc Trinh
    bool f = (a && !b) || (!a && b); // Tôi chén duy nhất 1 người trong 2 người hoặc là NGọc Trinh hoặc là Maria Ozawa
}
