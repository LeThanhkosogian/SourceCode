#include <iostream>
#include <cmath>

using namespace std;

void input(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap so thu " << i << ": ";
        cin >> arr[i];
    }

}

float ketqua1(int n, int arr[])
{
    float sum = 0;
    int count = 0;
    for (int i = 1; i < n; i++){
        if(i%2==0){
            sum += arr[i];
            count++;
        }
    }
    float ans = (sum / count);
    return ans;
}

int ketqua2(int n, int arr[])
{
    float sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++){
        if(i%2==1 && arr[i]%2==1){
            sum += arr[i];
            count++;
        }
    }
    float ketqua = sum / count;
    return ketqua;
}

int ketqua3(int n, int arr[])
{
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(max < arr[i]) max = arr[i];
    }
    return max;
}

int ketqua4(int n, int arr[])
{
    int max = arr[0];
    int location = 0;
    for(int i = 1; i < n; i++){
        if(max > arr[i]){
            max = arr[i];
            location = i;
        }
    }
    return location;
}

int ketqua5(int n, int arr[]){
    int count = 0;
    for(int i = 0; i < n; i++){
        int test = sqrt(arr[i]);
        if(arr[i]==test*test) count++;
    }
    return count;
}

int isPrime(int x){
    if(x<2) return 0;
    else if(x>2){
        for(int i = 2; i <= sqrt(x); i++){
            if(x%i==0) return 0;
        }
        return 1;
    }
    else return 1;
}

void ketqua6(int n, int arr[]){
    for(int i = 0; i < n; i++){
        if(isPrime(arr[i])==1) cout << arr[i] << " ";
    }
}

void ketqua7(int n, int arr[]){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int arr[100000];
    input(n, arr);

    cout << "Ket qua 1: " << ketqua1(n, arr) << endl;
    cout << "Ket qua 2: " << ketqua2(n, arr) << endl;
    cout << "Ket qua 3: " << ketqua3(n, arr) << endl;
    cout << "Ket qua 4: " << ketqua4(n, arr) << endl;
    cout << "Ket qua 5: " << ketqua5(n, arr) << endl;
    cout << "Ket qua 6: ";
    ketqua6(n, arr);
    cout << endl;
    cout << "Ket qua 7: ";
    ketqua7(n, arr);
    cout << endl;
}