#include <iostream>

using namespace std;

int main()
{
    cout << "1. Sort by Rows:  " << endl;
    for(int i1=1; i1<=10; i1++){
        for(int i2=1; i2 <= 10; i2++){
         cout << i1 << "x" << i2 << "=" << i1*i2 << "  ";
        }
        cout << endl;
    }

    cout << "2. Sort by Columns:  " << endl;
    for(int i2=1; i2<=10; i2++){
        for(int i1=1; i1 <= 10; i1++){
         cout << i2 << "x" << i1 << "=" << i2*i1 << "  ";
        }
        cout << endl;
    }
}