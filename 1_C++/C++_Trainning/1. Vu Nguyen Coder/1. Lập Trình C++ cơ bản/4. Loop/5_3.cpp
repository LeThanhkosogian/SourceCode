#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << "Nhap n: ";
        int n;
        cin >> n;

        cout << "Ket qua 1: ";
        int count = 0;
        for(int i=1; i <= n; i++){
            if(n%i==0){
                cout << i << " ";
                count++;
            }
        }
        cout << endl;

        cout << "Ket qua 2: " << count << endl;

        cout << "Ket qua 3: ";
        if(n!=1 && count==2) cout << "La so nguyen to";
        else cout << "Khong phai so nguyen to";

        cout << endl;
    }
    

}