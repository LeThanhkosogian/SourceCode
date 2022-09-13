#include<iostream>

using namespace std;

void input(int n, int arr[])
{
    for(int i = 0; i < n; i++) cin >> arr[i];
}

void ketqua1(int n1, int arr1[], int n2, int arr2[])
{
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(arr1[i] == arr2[j]) cout << arr1[i] << " ";
        }
    }
}



void mix(int n1, int arr1[], int n2, int arr2[])
{
    int add = n1;
    for(int i = 0; i < n2; i++){
        int check = 0;
        for(int j = 0; j < n1; j++){
            if(arr2[i] == arr1[j]){
                check=1;
                break;
            }
        }
        if(check == 0){
            arr1[add] = arr2[i];
            add++;
        }
    }

    int temp;
    for(int i = 0; i < add; i++){
        for(int j = i+1; j < add; j++){
            if(arr1[i] > arr1[j]){
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    for(int i = 0; i < add; i++){
        cout << arr1[i] << " ";
    }
}

int main()
{
    int n1,n2;
    cin >> n1 >> n2;
    int arr1[n1];
    cout << "Array1: ";
    input(n1, arr1);
    int arr2[n2];
    cout << "Array2: ";
    input(n2, arr2);

    cout << "Ket qua 1: ";
    ketqua1(n1, arr1, n2, arr2);
    cout << endl;

    cout << "Ket qua 2: ";
    mix(n1, arr1, n2, arr2);
}