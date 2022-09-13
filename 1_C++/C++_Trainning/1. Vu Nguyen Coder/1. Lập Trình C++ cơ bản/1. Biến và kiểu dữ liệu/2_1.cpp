#include<iostream>
#include <string>

using namespace std;

int main()
{
    string Gioi_thieu;
    string country;
    int age;
    float weight;

    cout << "Ten la: ";
    getline(cin, Gioi_thieu);

    cout << "Old: ";
    cin >> age;

    cin.ignore(); //Xóa bộ nhớ đệm để dùng getline sau cin

    cout << "Que o: ";
    getline(cin, country);

    cout << "Can nang: ";
    cin >> weight;

    cout << "Xin chao. Toi ten la " << Gioi_thieu << "." << endl << "Toi den tu " << country << "." << endl << "Nam nay toi " << age << " tuoi." << endl << "Toi nang " << weight << "kg." << endl;
}