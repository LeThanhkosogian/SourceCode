#include <iostream>

using namespace std;

void print(int a[], int n)
{
    for(int i = 0; i < n; i++){
        cout << &a[i] << " " << a[i] << endl;
    }
}

int capacity(int a[], int n)
{
    int result = sizeof(int)*n;
    return result;
}

int main()
{
    const int n = 5;
    int a[n] = {1, 6, 3, 7, 2 };
    
    cout << "Cau 1:\n";
    print(a, n);
    
    cout << "Cau 2: " << capacity(a, n) << " bytes\n";
}
