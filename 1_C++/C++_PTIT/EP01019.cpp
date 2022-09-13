#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b ,c ,d;
    cin >> a >> b >> c >> d;
    for(int i=1;;i++){
        if(a%i==b%i && b%i==c%i && c%i==d%i){
            cout << i;
            break;
        }
    }
    return 0;
}