#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int x)
{
    if(x<2) return false;
    else if(x>2){
        for(int i = 2; i <= sqrt(x); i++){
            if(x%i==0) return false;
        }
        return true;
    }
    else return true;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Ket qua 1: ";
    int sum = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            sum += arr[i][j];
        }
    }
    cout << sum << endl;

    cout << "Ket qua 2: ";
    int max = arr[0][0];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(max < arr[i][j]) max = arr[i][j];
        }
    }
    cout << max << endl;

    cout << "Ket qua 3: ";
    int temp[1000];
    int t = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            temp[t] = arr[i][j];
            t++;
        }
    }
    int k;
    for(int i = 0; i < t; i++){
        for(int j = i+1; j < t; j++){
            if(temp[i] < temp[j]){
                k = temp[i];
                temp[i] = temp[j];
                temp[j] = k;
            }
        }
    }
    cout << temp[0] << " " << temp[1] << " " << temp[2] << endl;

    cout << "Ket qua 4: ";
    int test;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(isPrime(arr[i][j])==true){
                test = arr[i][j];
                cout << arr[i][j] << endl;
                break;
            }
        }
        if(isPrime(test)){
            break;
        }
    }
}