#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

void input(int arr[], int &size){
    for(int i=0;i<size;i++) cin >> arr[i];
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int *arr = new int [n];
        input(arr,n);
        int res = -1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int pos = arr[j] - arr[i];
                if(pos > res) res = pos;
                }
            }
            cout << res << endl;
        }
    return 0;
}