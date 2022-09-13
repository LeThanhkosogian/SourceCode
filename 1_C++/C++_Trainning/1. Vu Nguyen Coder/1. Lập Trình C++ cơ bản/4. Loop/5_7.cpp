#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Nhap n: ";
    int n;
    cin >> n;
    
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(i>=5){
            ans = ans + 2*i*i + 5*i + 9;
        }
        else {
            ans = ans - 2*i*i + 4*i - 9;
        }
    }
    cout << "Ket qua: " << ans << endl;
}