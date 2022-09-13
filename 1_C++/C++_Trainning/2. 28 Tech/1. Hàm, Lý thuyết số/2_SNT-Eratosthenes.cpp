#include <bits/stdc++.h>

typedef long long ll;
#define FOR(i,a,b) for(int i = a ; i < b ; i++)
#define FORplus(i,a,b) for(int i = a ; i <= b ; i++)
#define FORrev(i,a,b) for (int i = (b)-1; i >= a; i--)
#define FORrevplus(i,a,b) for (int i = b; i >= a; i--)
#define endl "\n"

using namespace std;

//O(nlogn)

// Nếu muống sàng các SNT ko vượt quá n => tạo được 1 mảng có kích thước n+1 phần tử

// SNT 0 -> n
void sieve0_n(int n, int Prime[]){
    // Coi tất cả các số từ 0->n là SNT và loại 0 và 1
    FORplus(i,0,n){
        Prime[i] = 1;
    }
    Prime[0] = Prime[1] = 0; // Loại 0 và 1
    FORplus(i,2,sqrt(n)){
        // Nếu Prime[i] = 1 (i là SNT)
        if(Prime[i] == 1){
            // Duyệt tất cả các BỘI SỐ của i và cho nó ko là SNT
            for(int j = i*i; j <= n; j = j+i){
                Prime[j] = 0; // Không còn là SNT nữa
            }
        }
    }
}
//Note: Sử dụng khi cho nhiều TestCase

//SNT A -> B
int max(int a, int b){
    if(a > b) return a;
    return b;
}

void sieveA_B(int left, int right){
    int Prime[right-left+1];
    FORplus(i,0,right-left+1){
        Prime[i] = 1;
    }
    FORplus(i,2,sqrt(right)){
        for(int j = max(i*i,(left+i-1)/i*i); j <= right; j = j+i){
            Prime[j-left] = 0;
        }
    }
    FORplus(i,max(left,2),right){
        if(Prime[i-left] == 1){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){    
        int command;
        cout << "1 - SNT tu 0 -> n\n";
        cout << "2 - SNT A -> B\n";
        cin >> command;
        if(command == 1){
            int n; 
            cout << "Nhap n: ";
            cin >> n;
            int Prime[n+1]; //Ex: int Prime[99] tạo mảng 99 phần tử -> chỉ số chạy từ 0->98 có 99 phần tử
            sieve0_n(n, Prime);
            FORplus(i,0,n){
                if(Prime[i] == 1){
                    cout << i << " ";
                }
            }
        }
        else if(command == 2){
            int a,b;
            cout << "Nhap a va b: ";
            cin >> a >> b;
            sieveA_B(a,b);
        }
    }
    return 0;
}