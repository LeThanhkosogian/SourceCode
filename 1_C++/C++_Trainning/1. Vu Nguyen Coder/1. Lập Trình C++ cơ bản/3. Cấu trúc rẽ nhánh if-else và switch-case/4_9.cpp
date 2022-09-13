#include <bits/stdc++.h>

using namespace std;

int main()
{
    float toan, ly, hoa, van, anh, su, dia;
    cin >> toan >> ly >> hoa >> van >> anh >> su >> dia;
    float average = (toan+ly+hoa+van+anh+su+dia)/7;
    cout << "Diem tong ket: " << average << endl;
    
    if(((toan<0) || (toan>10)) || ((ly<0) || (ly>10)) || ((hoa<0) || (hoa>10)) || ((van<0) || (van>10)) || ((anh<0) || (anh>10)) || ((su<0) || (su>10)) || ((dia<0) || (dia>10))) cout << "Diem khong hop le";
    else if(average >= 8.0 && average <= 10.0){
        if(toan < 4.0 || ly < 4.0 || hoa < 4.0 || van < 4.0 || anh < 4.0 || su < 4.0 || dia < 4.0) cout << "Day la hoc sinh kha";
        else cout << "Day la hoc sinh gioi";
    }
    else if(average<8.0 && average>6.5){
        if(toan < 3.0 || ly < 3.0 || hoa < 3.0 || van < 3.0 || anh < 3.0 || su < 3.0 || dia < 3.0) cout << "Day la hoc sinh trung binh";
        else cout << "Day la hoc sinh kha";
    }
    else if(average<6.5 && average>4.0){
        if(toan == 0 || ly == 0 || hoa == 0 || van == 0 || anh == 0 || su == 0 || dia == 0) cout << "Day la hoc sinh yeu";
        else cout << "Day la hoc sinh trung binh";
    }
    else cout << "Day la hoc sinh yeu";
    
}