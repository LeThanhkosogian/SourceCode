#include<bits/stdc++.h>

using namespace std;

void input(int *arr, int n){
    for(int i=0;i<n;i++) cin >> arr[i];
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int *arr = new int[n];
        input(arr,n);
        //4x^3 + 5x^2 + 2x + 9 => x(x(x(4x + 5)) + 2) + 9
        long long res = arr[0];
        long long mod = 1000000007;
        for(int i=1;i<n;i++){            
            res = (res*x + arr[i]) % mod;
        }
        cout << res <<endl;
    }
    return 0;
}