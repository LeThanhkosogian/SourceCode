#include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i = a ; i < b ; i++)
#define FORplus(i,a,b) for(int i = a ; i <= b ; i++)
#define FORrev(i,a,b) for (int i = (b)-1; i >= a; i--)
#define FORrevplus(i,a,b) for (int i = b; i >= a; i--)
#define endl "\n"

using namespace std;

//https://www.youtube.com/watch?v=dhwTJlLqj4g&list=PLux-_phi0Rz2TB5D16sJzy3MgOht3IlND&index=19

int Prime[100001];
void sang(){
    FORplus(i,1,100000){
        Prime[i] = i;
    }
    FOR(i,2,sqrt(100000)){
        if(Prime[i] == i){        
            for(int j = i*i; j <= 100000; j = j+i){
                if(Prime[j] == j){
                    Prime[j] = i;}
                }
            }
        }
    }

int main()
{
    int t;
    cin >> t;
    sang();
    while(t--){
        int n;
        cin >> n;
        FORplus(i,1,n){
            cout << Prime[i] << " ";
        }
        cout << "\n";
    }
}