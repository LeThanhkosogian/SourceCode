#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
    string name;
    int tuoi;
    float diem;
};

void DuyetDS(string filename, vector<SinhVien *> &list){ 
    ifstream input;
    input.open("Data.txt");
    string line;
    string delimiter = ";";
    while(getline(input, line)){
        SinhVien *temp = new SinhVien;
        int check_pos = 0;
        int pos_of_Delimiter = line.find(delimiter);
        while(pos_of_Delimiter != string::npos){
            if(check_pos==0){
                temp->name = line.substr(0, pos_of_Delimiter);
            }
            else if(check_pos==1){
                temp->tuoi = stoi(line.substr(0, pos_of_Delimiter));
            }
        line = line.substr(pos_of_Delimiter+1, line.length()-1);
        pos_of_Delimiter = line.find(delimiter);
        check_pos++;
            if(check_pos==2){
                temp->diem = stof(line);
            }
        }
    list.push_back(temp);
    }
    input.close(); 
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void In_Dsach_SV(vector<SinhVien *> &list){
    cout << "[1] In danh sach Sinh vien:\n";
    cout << left << setw(10) << "STT" << setw(15) << "Ho Ten" << setw(12) << "Tuoi" << "Diem\n";
    for(int i = 0; i < list.size(); i++){
        cout << setw(10) << i+1 << setw(15) << list[i]->name << setw(12) << list[i]->tuoi << setw(12) << list[i]->diem;
        if(i != list.size()) cout << endl;
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void Them(vector<SinhVien *> &list){
    cout << "[2] Them sinh vien:\n";
    SinhVien *temp = new SinhVien;
    cout << "\t(?) Nhap ten: "; cin.ignore(); getline(cin,temp->name);
    cout << "\t(?) Nhap tuoi: "; cin >> temp->tuoi;
    cout << "\t(?) Nhap diem: "; cin >> temp->diem;
    list.push_back(temp);
    cout << "(!) Da them sinh vien co ten: " << temp->name << ", tuoi: " << temp->tuoi << ", diem: " << temp->diem << endl;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void Sua(vector<SinhVien *> &list){
    cout << "[3] Sua thong tin sinh vien:\n";
    int STT;
    cout << "(?) Nhap STT cua sinh vien can sua: "; cin >> STT;
    cout << "(!) Ban muon sua gi: \n";
    int request;
    cout << "\t1 - Ten\n" << "\t2 - Tuoi\n" << "\t3 - Diem\n"; cout << "(?) Chon: "; cin >> request;
    if(request == 1){
        string new_name;
        cout << "(?) Nhap ten: "; cin >> new_name; list[STT-1]->name = new_name;
    }
    else if(request == 2){
        int new_tuoi;
        cout << "(?) Nhap tuoi: "; cin >> new_tuoi; list[STT-1]->tuoi = new_tuoi;
    }
    else if(request == 3){
        int new_diem;
        cout << "(?) Nhap diem: "; cin >> new_diem; list[STT-1]->diem = new_diem;
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void Xoa(vector<SinhVien *> &list){
    cout << "[4] Xoa sinh vien\n";
    cout << "(?) Nhap STT: "; int STT; cin >> STT;
    for(int i = 0; i < list.size(); i++){
        if(i == STT - 1){
            list.erase(list.begin() + i);
        }
    }
    cout << "(!) Da xoa sinh vien co STT la "; cout << STT; cout << endl;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void Tim_kiem(vector<SinhVien *> &list){
    cout << "[5] Tim kiem sinh vien\n";
    string phrase; cout << "(?) Nhap ki tu: "; cin >> phrase;
    cout << left << setw(10) << "STT" << setw(15) << "Ho Ten" << setw(12) << "Tuoi" << "Diem\n";
    // if(phrase.length() == 1){ //phrase chi co 1 ky tu
    //     int count = 0;
    //     for(int i = 0; i < list.size(); i++){
    //         string temp_name = list[i]->name;
    //         for(int j = 0; j < temp_name.length(); j++){
    //             if(temp_name[j] == phrase[0]){
    //                 count++;
    //                 cout << left << setw(10) << count << setw(15) << list[i]->name << setw(12) << list[i]->tuoi << setw(12) << list[i]->diem << endl;
    //                 break;
    //             }
    //         }
    //     }
    // }
    // else if(phrase.length() > 1){
    //     string delimiter = " ";
    //     int count = 0;
    //     for(int i = 0; i < list.size(); i++){
    //         string temp_name = list[i]->name;
    //         int pos_of_Delimiter = temp_name.find(delimiter);
    //         while(pos_of_Delimiter != string::npos){
    //             string sub_temp_name = temp_name.substr(0, pos_of_Delimiter);
    //             if(phrase == sub_temp_name){
    //                 count++;
    //                 cout << left << setw(10) << count << setw(15) << list[i]->name << setw(12) << list[i]->tuoi << setw(12) << list[i]->diem << endl;
    //                 break;
    //             }
    //             temp_name = temp_name.substr(pos_of_Delimiter+1, temp_name.length()-1);
    //             pos_of_Delimiter = temp_name.find(delimiter);
    //         }
    //     }
    // }
    
    // Don Gian vkl dcu
    int count = 0;
    for(int i = 0; i < list.size(); i++){
        string temp_name = list[i]->name;
        int find_pos = -1;
        find_pos = temp_name.find(phrase);
        if(find_pos != -1){
            count++;
            cout << left << setw(10) << count << setw(15) << list[i]->name << setw(12) << list[i]->tuoi << setw(12) << list[i]->diem << endl;
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
char Lay_chu_cai_dau_tien(string name){
    for(int i = name.length()-1; i >= 0; i--){
        if(name[i] >= 'A' && name[i] <= 'Z'){
            return name[i];
        }
    }
}

void Sap_xep(vector<SinhVien *> &list){
    cout << "[6] Sap xep\n";
    cout << "\t(!) Sap xep the nao:\n";
    int request;
    cout << "\t(!) 1 - Sap xep theo ten ABC\n" << "\t(!) 2 - Sap xep theo tuoi tang dan\n" << "\t(!) 3 - Sap xep theo diem tang dan\n"; cout << "\t(?) Chon: "; cin >> request;
    vector<SinhVien *> temp = list;
    if(request == 1){
        for(int i = 0; i < temp.size(); i++){
            // char x1 = Lay_chu_cai_dau_tien(temp[i]->name); cout << (int)x1 << " " << x1 << endl;
            for(int j = i + 1; j < temp.size(); j++){
                char x1 = Lay_chu_cai_dau_tien(temp[i]->name); //Dat o day vi temp[i] thay doi lien tuc
                char x2 = Lay_chu_cai_dau_tien(temp[j]->name);
                if(x1 > x2){
                    SinhVien *tpl;
                    tpl = temp[i];
                    temp[i] = temp[j];
                    temp[j] = tpl;
                }
            } 
        }
        cout << left << setw(10) << "STT" << setw(15) << "Ho Ten" << setw(12) << "Tuoi" << "Diem\n";
        for(int i = 0; i < temp.size(); i++){
            cout << left << setw(10) << i+1 << setw(15) << temp[i]->name << setw(12) << temp[i]->tuoi << setw(12) << temp[i]->diem << endl;
        }
    }
    else if(request == 2){
        for(int i = 0; i < temp.size(); i++){
            for(int j = i + 1; j < temp.size(); j++){
                if(temp[i]->tuoi > temp[j]->tuoi){
                    SinhVien *tpl;
                    tpl = temp[i];
                    temp[i] = temp[j];
                    temp[j] = tpl;
                }
            } 
        }
        cout << left << setw(10) << "STT" << setw(15) << "Ho Ten" << setw(12) << "Tuoi" << "Diem\n";
        for(int i = 0; i < temp.size(); i++){
            cout << left << setw(10) << i+1 << setw(15) << temp[i]->name << setw(12) << temp[i]->tuoi << setw(12) << temp[i]->diem << endl;
        }
    }
    else if(request == 3){
        for(int i = 0; i < temp.size(); i++){
            for(int j = i + 1; j < temp.size(); j++){
                if(temp[i]->diem > temp[j]->diem){
                    SinhVien *tpl;
                    tpl = temp[i];
                    temp[i] = temp[j];
                    temp[j] = tpl;
                }
            } 
        }
        cout << left << setw(10) << "STT" << setw(15) << "Ho Ten" << setw(12) << "Tuoi" << "Diem\n";
        for(int i = 0; i < temp.size(); i++){
            cout << left << setw(10) << i+1 << setw(15) << temp[i]->name << setw(12) << temp[i]->tuoi << setw(12) << temp[i]->diem << endl;
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
float Average_score(vector<SinhVien *> list){
    float average = 0;
    for(int i = 0; i < list.size(); i++){
        average += list[i]->diem;
    }
    return (float)(average/list.size());
}

float Highest_score(vector<SinhVien *> list){
    float highest = list[0]->diem;
    for(int i = 0; i < list.size(); i++){
        if(highest < list[i]->diem) highest = list[i]->diem;
    }
    return highest;
}

void Thong_ke(vector<SinhVien *> &list){
    cout << "[7] Thong ke\n";
    cout << "(!) Diem trung binh ca lop: " << fixed << setprecision(1) << Average_score(list) << endl;

    float gioi = 0, kha = 0, kem = 0;
    for(int i = 0; i < list.size(); i++){
        if(list[i]->diem <= 10 && list[i]->diem >= 8){
            gioi++;
        }
        else if(list[i]->diem < 8 && list[i]->diem >= 6){
            kha++;
        }
        else if(list[i]->diem < 6 && list[i]->diem >=0){
            kem++;
        }
    }
    cout << "(!) Ti le sinh vien gioi: " << (int)(gioi/list.size()*100) << "%\n";
    cout << "(!) Ti le sinh vien kha: " << (int)(kha/list.size()*100) << "%\n";
    cout << "(!) Ti le sinh vien kem: " << (int)(kem/list.size()*100) << "%\n";
    
    cout << "(!) Sinh Vien diem cao nhat (" << Highest_score(list) << ") la:\n";
    for(int i = 0; i < list.size(); i++){
        if(list[i]->diem == Highest_score(list)) cout << "\t" << list[i]->name << "\n";
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void Sao_luu(vector<SinhVien *> &list, string filename){
    cout << "[8] Sao luu thong tin\n";
    ofstream output;
    output.open(filename, ios::trunc); 
    for(int i = 0; i < list.size(); i++){
        output << list[i]->name << ";" << list[i]->tuoi << ";" << list[i]->diem << "\n";
    }
    output.close();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void Thoat(vector<SinhVien *> &list){
    exit(0);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    vector<SinhVien *> list; //Khai bao kieu con tro -> dung ham tham chieu  
    DuyetDS("Data.txt",list);

    cout << "Danh sach thao tac:\n";
    {
    cout << "1 - In danh sach SV\n";
    cout << "2 - Them\n";
    cout << "3 - Sua\n";
    cout << "4 - Xoa\n";
    cout << "5 - Tim kiem\n";
    cout << "6 - Sap xep\n";
    cout << "7 - Thong ke\n";
    cout << "8 - Sao luu\n";
    cout << "9 - Thoat\n";
    }

    int Command;
    while(Command){    
        cout << "Nhap lenh: ";
        cin >> Command;
        if(Command == 1){
            In_Dsach_SV(list);
            cin.ignore();
        }
        else if(Command == 2){
            Them(list);
            cin.ignore();
        }
        else if(Command == 3){
            Sua(list);
            cin.ignore();
        }
        else if(Command == 4){
            Xoa(list);
            cin.ignore();
        }
        else if(Command == 5){
            Tim_kiem(list);
            cin.ignore();
        }
        else if(Command == 6){
            Sap_xep(list);
            cin.ignore();
        }
        else if(Command == 7){
            Thong_ke(list);
            cin.ignore();
        }
        else if(Command == 8){
            Sao_luu(list, "Data.txt");
            cin.ignore();
        }
        else if(Command == 9){
            Thoat(list);
            cin.ignore();
        }
    }
    return 0;
}
