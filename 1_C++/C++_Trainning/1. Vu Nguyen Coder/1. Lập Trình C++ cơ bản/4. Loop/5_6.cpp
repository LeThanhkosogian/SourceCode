#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Nhap n: ";
    int n;
    cin >> n;
    int sum=0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
        if(sum > n){
            cout << "X nho nhat la: " << i;
            break;
        }
    }  
}