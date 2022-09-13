#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Cau 1: " << endl;
    int index1 = n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j>=index1) cout << "0 ";
            else cout << "  ";
        }
    index1 = index1-1;
    cout << endl;
    }

    cout << "Cau 2: " << endl;
    int index2 = n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j>=index2){
                if(i+j-1==n || i==n || j==n) cout << "1 ";
                else cout << "0 ";
            }
            else cout << "  ";
        }
    index2 = index2-1;
    cout << endl;
    }
}