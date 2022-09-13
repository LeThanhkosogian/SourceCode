#include <iostream>
#include <cmath>
#include <algorithm> 

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d; cin >> a >> b >> c >> d;
        long long gcd = __gcd(a,b);
        long long lcm = a*b/gcd;
        gcd = __gcd(c,gcd);
        lcm = lcm*c/__gcd(c,lcm);
        long long o = ceil(pow(10, d - 1) / lcm);
        if (o * lcm >= pow(10, d)) cout << -1;
        else cout << o * lcm;
        cout << endl;
    }
    return 0 ;
}
