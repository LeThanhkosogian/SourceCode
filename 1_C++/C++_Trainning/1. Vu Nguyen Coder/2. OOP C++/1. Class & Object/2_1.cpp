#include <bits/stdc++.h>

using namespace std;

class HocSinh {
public:
    int student_identify;
    string name;
    int age;
    string country;
    float height;
    float weight;
    float scoreTable[8];

    HocSinh(int maHS, string ht, int t, string que, float cao, float nang, float bangdiem[]){
        student_identify = maHS;
        name = ht;
        age = t;
        country = que;
        height = cao;
        weight = nang;
        for(int i = 0; i < 8; i++){
            scoreTable[i] = bangdiem[i];
        }
    }

    void Introduction(){
        cout << "Ma hoc sinh: " << student_identify << endl;
        cout << "Tem hoc sinh: " << name << endl;
        cout << "Tuoi: " << age << endl;
        cout << "Que quan: " << country << endl;
    }

    void ScoreTable(){
        cout << "Bang diem tong ket:\n";
        cout << left << setw(10) << "Toan" << setw(10) << "Ly" << setw(10) << "Hoa" << setw(10) << "Van" << setw(10) << "Anh" << setw(10) << "Sinh" << setw(10) << "Su" << setw(10) << "Dia";
        cout << endl;
        for(int i = 0; i < 8; i++){
            cout << left << setw(10) << scoreTable[i];
        }
        cout << endl;
    }

    float HocLuc(){
        int sum = 0;
        for(int i = 0; i < 8; i++){
            sum = sum + scoreTable[i];
        }
        return (float)sum/8;
    }
};

int main(){
    float bangdiem[8] = {9, 10, 8, 10, 6, 5, 4, 3};
    HocSinh *LeThanh = new HocSinh(21062003, "Le Thanh", 19, "Ha Noi", 175, 68, bangdiem); //bangdiem[8] la sai nang ne
    LeThanh->Introduction();
    LeThanh->ScoreTable();
    cout << "Hoc luc: ";
    if(LeThanh->HocLuc() >= 8) cout << "Gioi";
    else if(LeThanh->HocLuc() < 5) cout << "Trung Binh";
    else cout << "Kha";
}