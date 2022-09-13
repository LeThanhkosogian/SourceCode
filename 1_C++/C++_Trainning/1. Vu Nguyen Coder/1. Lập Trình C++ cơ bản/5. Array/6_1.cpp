#include<iostream>

using namespace std;

void input(int n, int arr[]){
    for(int i=0; i<n; i++) cin >> arr[i];
}

void ketqua1(int n, int arr[]){
    cout << "Ket qua 1: ";
    for(int i=n-1; i>=0; i--) cout << arr[i] << " ";
}

int ketqua2(int n, int arr[]){
    cout << "Ket qua 2: ";
    int sum;
    sum = arr[0]+arr[n-1];
    return sum;
}

void ketqua3(int n, int arr[]){
    cout << "Ket qua 3: ";
    int k = n/2;
    if(n%2==1){
        cout << arr[k];
    }
    else cout << arr[k] << " " << arr[k-1];
}

float ketqua4(int n, int arr[]){
    cout << "Ket qua 4: ";
    int sumle=0, sumchan=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            sumle += arr[i];
        }
        else sumchan += arr[i];
    }
    return sumle*sumchan;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << "Nhap n: ";
        int n;
        cin >> n;
        int arr[100000];
        
        cout << "Vi Du: ";
        input(n, arr);

        ketqua1(n, arr);
        cout << endl;
        cout << ketqua2(n, arr);
        cout << endl;
        ketqua3(n, arr);
        cout << endl;
        cout << ketqua4(n, arr);
        cout << endl;
    }
}