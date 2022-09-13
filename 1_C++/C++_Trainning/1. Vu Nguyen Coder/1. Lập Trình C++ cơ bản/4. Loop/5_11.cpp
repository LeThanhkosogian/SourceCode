#include<iostream>

using namespace std;

int main()
{
    cout << "Cau 1: " << endl;
    for(int i = 1; i <=8; i++){
        for(int j = 1; j <=14; j++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << "Cau 2: " << endl;
    for(int i = 1; i <=8; i++){
        for(int j = 1; j <=14; j++){
            if(i==1 || i==8 || j==1 || j==14){
                cout << "* ";
            }
            else cout << "  ";
        }
        cout << endl;
    }

    cout << "Cau 3: " << endl;
    for(int i = 1; i <=7; i++){
        for(int j = 1; j <=13; j++){
            if(i%2==1 || j%2==1){
                cout << "* ";
            }
            else cout << "  ";
        }
        cout << endl;
    }
}