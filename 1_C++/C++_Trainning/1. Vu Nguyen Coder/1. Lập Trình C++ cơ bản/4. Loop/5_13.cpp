#include <iostream>

using namespace std;

int main()
{
    int height;
    cin >> height;

    cout << "Cau 1: " << endl;
    int index1 = 0;
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= height*2; j++){
            if(j>=height-index1 && j<=height+index1){
                cout << "0 ";
            }
            else cout << "  ";
        }
        index1++;
        cout << endl;
    }

    cout << "Cau 2: " << endl;
    int index2 = 0;
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= height*2; j++){
            if(j>=height-index2 && j<=height+index2){
                if(j==height-index2 || j==height+index2 || i==height) 
                cout << "1 ";
                else cout << "0 ";
            }
            else cout << "  ";
        }
        index2++;
        cout << endl;
    }

    cout << "Cau 3: " << endl;
    int index3 = 0;
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= height*2; j++){
            if(j>=height-index3 && j<=height+index3){
                if((i+j)%2 == 1) cout << "1 ";
                else cout << "0 ";
            }
            else cout << "  ";
        }
        index3++;
        cout << endl;
    }

    cout << "Cau 4: " << endl;
    int index4 = 0;
    int element1 = 0;
    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= height*2; j++){
            if(j>=height-index4 && j<=height+index4){
                cout << element1 << " ";
            }
            else cout << "  ";
        }
        element1++;
        index4++;
        cout << endl;
    }

    cout << "Cau 5: " << endl;
    int index5 = 0;
    for(int i = 1; i <= height; i++){
        int element2 = 0;
        for(int j = 1; j <= height*2; j++){
            if(j>=height-index5 && j<=height+index5){
                if(j>height){
                    element2--;
                    cout << element2 << " ";

                }
                else if(j<height){
                    cout << element2 << " ";
                    element2++;
                }
                else  cout << i-1 << " ";
            }
            else cout << "  ";
        }
        index5++;
        cout << endl;
    }
}