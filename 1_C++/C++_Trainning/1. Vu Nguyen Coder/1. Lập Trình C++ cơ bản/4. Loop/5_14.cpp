#include<iostream>
#include<cmath>

using namespace std;

int main()
{   
    int index=9;
    for(int i=0; i<=18; i++){
        for(int j=18; j>=0; j--){
            if( j==18 || i==0 || i==18 || j==0){
                cout << abs(index) << " ";
            }
        }
        cout << endl;
        index--;
    }
}