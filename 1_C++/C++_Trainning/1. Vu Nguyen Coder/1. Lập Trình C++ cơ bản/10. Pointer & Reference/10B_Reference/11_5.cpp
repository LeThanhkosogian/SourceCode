
/*******************************************************************************
************ Bài tập lập trình C++ cơ bản - Bài 11 ****************************
********************** vunguyencoder.com **************************************



*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}

void swap(int *a, int *b)
{
    int *temp;
    (*temp) = (*a);
    (*a) = (*b);
    (*b) = (*temp);
}

int main()
{
    int x = 10;
    int y = 20;
    
    {
        swap(x, y);
        cout << "Test 1: " << (x==20 && y==10 ? "Pass" : "Failed") << "\n";
    }
    {
        swap(&x, &y);
        cout << "Test 2: " << (x==10 && y==20 ? "Pass" : "Failed") << "\n";
    }
    {
        int z = 30;
        int *p1 = &x;
        int *p2 = &y;
        int *p3 = &z;
        swap(p1, p2);
        swap(p2, p3);
        cout << "Test 3: " << (x==20 && y==30 && z==10 ? "Pass" : "Failed") << "\n";
    }
}












