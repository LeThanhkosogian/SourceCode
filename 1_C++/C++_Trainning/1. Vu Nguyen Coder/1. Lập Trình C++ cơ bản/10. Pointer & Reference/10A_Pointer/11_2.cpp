#include <iostream>

using namespace std;

int findMax(int *a, int n)
{   
    int max = *a;
    for(int *p = a; p < a+n; p++){
        if(max < *p) max = *p;
    }
    return max;
}

// Ko sửa hàm main.
int main()
{
    const int N = 5;
    
    // Test cases: 
    {
        int a[N] = {15, 3, 11, 9, 10};
        cout   << "Test 1: " << (findMax(a, N) == 15 ? "Pass" : "Failed") << "\n";
    }
    {
        int a[N] = {-1, -3, -11, -9, -10};
        cout   << "Test 2: " << (findMax(a, N) == -1 ? "Pass" : "Failed") << "\n";
    }
    
}
