#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Nhap n: ";
    int n;
    cin >> n;

    cout << "1. P(n) = 1 + 2 + 3 + ... + n. " << endl;
    int ans1 = 0;
    for(int i = 1; i <= n; i++){
        ans1 = ans1 + i;
    }
    cout << "==> P(" << n << ") = " << ans1 << endl;

    cout << "2. Q(n) = 1 * 2 * 3 * ... * n. " << endl;
    int ans2 = 1;
    for(int i = 1; i <= n; i++){
        ans2 = ans2 * i;
    }
    cout << "==> Q(" << n << ") = " << ans2 << endl;

    cout << "3. R(n) = 1 + 3 + 5 + ... + n. " << endl;
    int ans3 = 0;
    for(int i = 1; i <= n; i++){
        if(i%2 != 0){
        ans3 = ans3 + i;
        }
    }
    cout << "==> R(" << n << ") = " << ans3 << endl;

    cout << "4. S(n) = 1^3 + 2^3 + ... + n^3. " << endl;
    double ans4 = 0;
    for(int i = 1; i <= n; i++){
        ans4 = ans4 + pow(i, 3);
    }
    cout << "==> S(" << n << ") = " << ans4 << endl;

    cout << "5. T(n) = 1/1^1 + 2/2^2 + ... + n/n^n. " << endl;
    double ans5 = 0;
    for(int i = 1; i <= n; i++){
        ans5 = ans5 + i/pow(i, i);
    }
    cout << "==> T(" << n << ") = " << ans5 << endl;

    cout << "6. U(n) = 12 + 23 + 3*4 + ... + n * (n+1). " << endl;
    double ans6 = 0;
    for(int i = 1; i <= n; i++){
        ans6 = ans6 + i*(i+1);
    }
    cout << "==> U(" << n << ") = " << ans6 << endl;

    cout << "7. V(n) = 1 + 11 + 111 + ... + (11...1). " << endl;
    double ans7 = 0;
    double k1 = 0;
    for(int i = 1; i <= n; i++){
        k1 = k1*10+1;
        ans7 = ans7 + k1;
    }
    cout << "==> V(" << n << ") = " << ans7 << endl;

    cout << "8. X(n) = 1 + (1+2) + (1+2+3) + .... + (1+2+3+...+n). " << endl;
    double ans8 = 0;
    double k2 = 0;
    for(int i = 1; i <= n; i++){
        k2 = k2+i;
        ans8 = ans8 + k2;
    }
    cout << "==> V(" << n << ") = " << ans8 << endl;
}