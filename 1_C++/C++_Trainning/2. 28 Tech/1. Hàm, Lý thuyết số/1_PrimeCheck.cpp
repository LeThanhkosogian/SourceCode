#include <bits/stdc++.h>

typedef long long ll;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define FOR(i,a,b) for(int i = a ; i < b ; i++)
#define FORrev(i,a,b) for (int i = (b)-1; i >= a; i--)
#define endl "\n"

using namespace std;

int isPrime(int n){    // O(logn)
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return n > 1;
}

int main() {
    faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    if(isPrime(n)) cout << "YES\n";
    else cout << "NO";
    return 0;
}
