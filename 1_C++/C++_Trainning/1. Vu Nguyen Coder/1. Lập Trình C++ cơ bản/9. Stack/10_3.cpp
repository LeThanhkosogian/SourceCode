#include <iostream>

using namespace std;

struct Person
{
    std::string ho_ten = "";
    int tuoi;
    float chieu_cao, can_nang;
};

int main()
{
    Person p;
    p.ho_ten = "Nguyen Anh Vu";
    p.tuoi = 30;
    p.chieu_cao = 1.65;
    p.can_nang = 60;

    cout << "Cau 1: Dia chi cua p la " << &p << endl;

    cout << "Cau 2:\n";
    cout << "p.ho_ten" << " " << &p.ho_ten << " " << p.ho_ten << endl;
    cout << "p.tuoi" << " " << &p.tuoi << " " << p.tuoi << endl;
    cout << "p.chieu_cao" << " " << &p.chieu_cao << " " << p.chieu_cao << endl;
    cout << "p.can_nang" << " " << &p.can_nang << " " << p.can_nang << endl;

    cout << "Cau 3: Dung luong cua p la " << sizeof(p) << " bytes" << endl;
}