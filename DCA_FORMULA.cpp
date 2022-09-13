#include <bits/stdc++.h>

using namespace std;

void DCA(double $_Lucmua, double $_Hientai, double soCoin, double $_Muathem, double $_VEBO){

    double Gia_mua = $_Lucmua/soCoin;
    cout << "Gia LUC MUA la: " << fixed << setprecision(5) << Gia_mua << endl;
    double Gia_hientai = $_Hientai/soCoin;
    cout << "Gia HIEN TAI la: " << fixed << setprecision(5) <<Gia_hientai << endl;
    if($_Hientai > $_Lucmua) cout << "Dang LAI: " << fixed << setprecision(2) << (1-$_Hientai/$_Lucmua)*100 << "%" << endl;
    else cout << "Dang LO: " << fixed << setprecision(2) << (1-$_Hientai/$_Lucmua)*100 << "%" << endl;

    double Tong_so_coin_saukhimuathem = $_Muathem/Gia_hientai + soCoin;
    $_VEBO = ($_Lucmua + $_Muathem)/Tong_so_coin_saukhimuathem;
    cout << "Gia VE BO: " << fixed << setprecision(5) << $_VEBO << endl;

}

int main()
{
    int t;
    cin >> t;
    while(t--){
        double $_Lucmua;
        cout << "Tong so $ LUC MUA: "; cin >> $_Lucmua;
        double $_Hientai;
        cout << "Tong so $ Hien Tai: "; cin >> $_Hientai;
        double soCoin;
        cout << "Tong so COIN: "; cin >> soCoin;
        double $_Muathem;
        cout << "So $ muon mua them: "; cin >> $_Muathem;
        double $_VEBO;

        DCA($_Lucmua, $_Hientai, soCoin, $_Muathem, $_VEBO);

        cout << endl;
    }

}

