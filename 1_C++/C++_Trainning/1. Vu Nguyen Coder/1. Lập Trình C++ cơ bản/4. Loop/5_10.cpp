#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    cout << "Cau 1: " << endl;
    for(int i1=0; i1 <= 4; i1++){
        for(int j1a=0; j1a <= 9; j1a++){
            cout << j1a << " ";
        }
        cout << endl;
        for(int j1b=9; j1b >= 0; j1b--){
            cout << j1b << " ";
        }
        cout << endl;
    }

    cout << "Cau 2: " << endl;
    for(int i2=0; i2 <=9; i2++){
        for(int j2=0; j2 <= 9; j2++){
            if(j2==0 || i2==0 || j2==9 || i2==9){
                cout << "1" << " ";
            }
            else cout << "0" << " ";
        }
        cout << endl;
    }

    cout << "Cau 3: "  << endl;
    for(int i3=0; i3 <= 9; i3++){
        for(int j3=0; j3 <= 9; j3++){
            if(i3==j3){
                cout << "0" << " ";
            }
            else cout << "1" << " ";
        }
        cout << endl;
    }

    cout << "Cau 4: " << endl;
    for(int i4=0; i4 <= 9; i4++){
        for(int j4=0; j4 <= 9; j4++){
            if( (i4==j4) || i4+j4==9){
                cout << "0" << " ";
            }
            else cout << "1" << " ";
        }
        cout << endl;
    }

    cout << "Cau 5: " << endl;
    for(int i5=0; i5<=4; i5++){
        for(int j5a=0; j5a<=4; j5a++){
            cout << "0 1 ";
        }
        cout << endl;
        for(int j5b=0; j5b<=4; j5b++){
            cout << "1 0 ";
        }
        cout << endl;
    }

    cout << "Cau 6: " << endl;
    for(int i6 = 0; i6 <= 9; i6++){
        for(int j6 = 0; j6 <= 9; j6++){
            cout << abs(j6-i6) << " ";
        }
        cout << endl;
    }
}