#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int nam_sinh;
    string country;
    float height;
    float weight;
    bool Tinh_trang_hon_nhan;
    char Ket_qua_tot_nghiep;

    cout << "Nhap ho ten: ";
    getline(cin, name);

    cout << "Nhap nam sinh: ";
    cin >> nam_sinh;

    cin.ignore();

    cout << "Nhap que quan: ";
    getline(cin, country);

    cout << "Nhap chieu cao: ";
    cin >> height;

    cout << "Nhap can nang: ";
    cin >> weight;

    cout << "Nhap tinh trang hon nhan (1-ket hon; 0-chua ket hon): ";
    cin >> Tinh_trang_hon_nhan;

    cout << "Nhap xep loai tot nghiep: ";
    cin >> Ket_qua_tot_nghiep;

    cout << "Ho ten: " << name << endl;
    cout << "Nam sinh: " << nam_sinh << endl;
    cout << "Que quan: " << country << endl;
    cout << "Chieu cao: " << height << " m" << endl;
    cout << "Can nang: " << weight << " kg" << endl;
    cout << "Tinh_trang_hon_nhan: " << Tinh_trang_hon_nhan << endl;
    cout << "Xep loai tot nghiep: " << Ket_qua_tot_nghiep << endl;
}