#include <bits/stdc++.h>

using namespace std;

struct StudentList
{
    string name;
    int Toan, Ly, Cpp;

    void Winner(int numbersofstudents, StudentList array[])
    {   
        //Nhap:
        for(int i = 1; i <= numbersofstudents; i++){
            getline(cin, array[i].name);
        }
        for(int i = 1; i <= numbersofstudents; i++){
            cin >> array[i].Toan;
        }
        for(int i = 1; i <= numbersofstudents; i++){
            cin >> array[i].Ly;
        }
        for(int i = 1; i <= numbersofstudents; i++){
            cin >> array[i].Cpp;
        }
        
        //Xuat:
        int Max_score = array[1].Toan + array[1].Ly + array[1].Cpp;
        for(int i = 1; i <= numbersofstudents; i++){
            if(Max_score < (array[i].Toan + array[i].Ly + array[i].Cpp)) Max_score = array[i].Toan + array[i].Ly + array[i].Cpp;
        }
        for(int i = 1; i <= numbersofstudents; i++){
            if((array[i].Toan + array[i].Ly + array[i].Cpp) == Max_score){
                cout << array[i].name << " " << array[i].Toan << " " << array[i].Ly << " " << array[i].Cpp << endl;
            }
        }
    }
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    StudentList arr[105];
    arr[105].Winner(n, arr);
}