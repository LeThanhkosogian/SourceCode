#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>

using namespace std;

void input(int arr[], int &size){
    for(int i = 0; i < size; i++) cin >> arr[i];
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int *arr = new int [n];
        input(arr,n);
        sort(arr, arr+n);
        int dif = abs(arr[0] - arr[1]);
        for(int i=0;i<n;i++){
            if(dif > abs(arr[i] - arr[i+1]))
                dif = abs(arr[i] - arr[i+1]);
        }
        cout << dif << endl;
    }
    return 0;
}
