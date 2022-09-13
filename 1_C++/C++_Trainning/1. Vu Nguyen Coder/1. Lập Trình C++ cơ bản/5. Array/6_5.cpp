#include <iostream>

using namespace std;

int main()
{
    int m, n, p;
    cin >> m >> n >> p;
    int arr[m][n][p];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j){
            for(int k = 0; k < p; k++){
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "Ket qua 1: ";
    int temp[10000];
    int count = -1;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j){
            for(int k = 0; k < p; k++){
                temp[count++] = arr[i][j][k];
            }
        }
    }
    int k;
    for(int i = 0; i < count; i++){
        for(int j = i+1; j < count; j++){
            if(temp[i] < temp[j]){
                k = temp[i];
                temp[i] = temp[j];
                temp[j] = k;
            }
        }
    }
    cout << temp[0] << " ";
    for(int i = 0; i < count; i++){
        if(temp[i+1] != temp[i]){
            cout << temp[i+1] << " ";
        }
    }

    
}