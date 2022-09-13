#include <bits/stdc++.h>

using namespace std;

class HocSinh {
public:
    string student_identify;
    string name;
    int age;
    string country;
    float height;
    float weight;

    HocSinh(string maHS, string ht, int t, string que, float cao, float nang){
        student_identify = maHS;
        name = ht;
        age = t;
        country = que;
        height = cao;
        weight = nang;
    }
};

class Lop_hoc {
public:
    string Ma_lop;
    vector<HocSinh *> Student_list;
    HocSinh *loptruong = new HocSinh;
    static int Tong_so_lop;

    void ThemHS(){
        cin.ignore();
        cout << "[1] Them sinh vien\n";
        HocSinh *hoc_sinh_can_them = new HocSinh(hoc_sinh_can_them->student_identify, hoc_sinh_can_them->name, hoc_sinh_can_them->age, hoc_sinh_can_them->country, hoc_sinh_can_them->height, hoc_sinh_can_them->weight);
        if(Student_list.size() == 0){
            Student_list.push_back(loptruong);
            cout << "Da them Lop Truong !\n";
        }
        else {
            cout << "Nhap ma sinh vien can them: "; cin >> hoc_sinh_can_them->student_identify;
            cout << "Nhap ten sinh vien can them: "; cin >> hoc_sinh_can_them->name;
            cout << "Nhap tuoi sinh vien can them: "; cin >> hoc_sinh_can_them->age; cin.ignore();
            cout << "Nhap que sinh vien can them: "; cin >> hoc_sinh_can_them->country;
            cout << "Nhap chieu cao sinh vien can them: "; cin >> hoc_sinh_can_them->height;
            cout << "Nhap can nang sinh vien can them: "; cin >> hoc_sinh_can_them->weight;
            cout << "Da them sinh vien nay !\n";
        }
        cout << left << setw(15) << "STT" << setw(15) << "Ma SV" << setw(15) << "Ten" << setw(15) << "Tuoi" << setw(15) << "Que" << setw(15) << "Chieu cao" << setw(15) << "Can nang";
        cout << endl;
        for(int i = 0; i < Student_list.size(); i++){
            cout << left << setw(15) << i+1 << setw(15) << Student_list[i]->student_identify << setw(15) << Student_list[i]->name << setw(15) << Student_list[i]->age << setw(15) << Student_list[i]->country << setw(15) << Student_list[i]->height << setw(15) << Student_list[i]->weight << endl;
        }
    }
    
    void XoaHS(){
        cin.ignore();
        cout << "[2] Xoa hoc sinh\n";
        string ma_HS_can_xoa;
        cout << "Nhap ma HS can xoa: "; cin >> ma_HS_can_xoa;
        for(int i = 0; i < Student_list.size(); i++){
            if(Student_list[i]->student_identify == ma_HS_can_xoa) Student_list.erase(Student_list.begin() + i);
        }
        cout << "Da xoa sinh vien nay !\n";
        cout << left << setw(15) << "STT" << setw(15) << "Ma SV" << setw(15) << "Ten" << setw(15) << "Tuoi" << setw(15) << "Que" << setw(15) << "Chieu cao" << setw(15) << "Can nang";
        cout << endl;
        for(int i = 0; i < Student_list.size(); i++){
            cout << left << setw(15) << i+1 << setw(15) << Student_list[i]->student_identify << setw(15) << Student_list[i]->name << setw(15) << Student_list[i]->age << setw(15) << Student_list[i]->country << setw(15) << Student_list[i]->height << setw(15) << Student_list[i]->weight << endl;
        }
    }

    void SuaHS(){
        cin.ignore();
        cout << "[3] Sua thong tin hoc sinh\n";
        int stt_sua_thongtin; cout << "STT cua hoc sinh can sua thong tin la: "; cin >> stt_sua_thongtin;
        int check; cout << "Chon thong tin can sua: \n";
        cout << "\t1 - Sua MHS\n"; cout << "\t2 - Sua ten\n"; cout << "\t3 - Sua tuoi\n"; cout << "\t4 - Sua que\n"; cout << "\t5 - Sua chieu cao\n"; cout << "\t6 - Sua can nang\n";
        for(int i = 0; i < Student_list.size(); i++){
            if(i+1 == stt_sua_thongtin){
                cin >> check;
                if(check == 1){
                    cin.ignore();
                    cout << "Nhap MHS moi: "; cin >> Student_list[i]->student_identify;
                }
            }
        }
    }
};

int main(){
    Lop_hoc *Lop_Thay_Thanh = new Lop_hoc;
    int command;

    cout << "Chon thao tac:\n";
    cout << "\t1 - Them hoc sinh\n";
    cout << "\t2 - Xoa hoc sinh\n";
    cout << "\t3 - Sua hoc sinh\n";
    cout << "\t4 - Chon lop truong\n";
    cout << "\t5 - Them hoc sinh\n";

    while(command){
        cout << "Nhap lenh: ";
        cin >> command;
        if(command == 1){
            Lop_Thay_Thanh->ThemHS();
        }
        else if(command == 2){
            Lop_Thay_Thanh->XoaHS();
        }
        else if(command == 3){
            Lop_Thay_Thanh->SuaHS();
        }
    }
}