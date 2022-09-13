#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int d = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= d; j++) cout << j;
        d = d + 2;
        cout << endl;
    }
    return 0;
}