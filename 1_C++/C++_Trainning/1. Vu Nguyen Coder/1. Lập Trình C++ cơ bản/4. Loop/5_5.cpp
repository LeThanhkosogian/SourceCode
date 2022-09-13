#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Nhap n: ";
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    cout << "Ket qua: ";
    if(sum==n) cout << "la so hoan hao";
    else cout << "khong la so hoan hao";
}