#include <iostream>
#include <string>

using namespace std;

int main()
{
    string phrase;
    getline(cin, phrase);
    
    cout << "Ket qua 1: ";
    int dem_kq1 = 0;
    for(int i = 0; i < phrase.length(); i++){
        if(phrase[i]==' ') dem_kq1++;
    }
    cout << dem_kq1 << endl;

    cout << "Ket qua 2: ";
    int dem_so = 0;
    int dem_chu = 0;
    for(int i = 0; i < phrase.length(); i++){
        if(phrase[i] >= '0' && phrase[i] <= '9') dem_so++;
        else if((phrase[i]>='A' && phrase[i]<='Z') || (phrase[i]>='a' && phrase[i] <= 'z')) dem_chu++;
    }
    cout << dem_chu << " ki tu chu" << " & " << dem_so << " ki tu so" << endl;

    cout << "Ket qua 3: ";
    string temp = phrase;
    for(int i = 0; i < phrase.length(); i++){
        if(temp[i]>='a' && temp[i]<='z') temp[i] = temp[i] - 32;
    }
    cout << temp << endl;

    cout << "Ket qua 4: ";
    string chu;
    string so;
    for(int i = 0; i < phrase.length(); i++){
        if((phrase[i]>='A' && phrase[i]<='Z') || (phrase[i]>='a' && phrase[i] <= 'z' || phrase[i]==' ')){
            chu = chu + phrase[i];
        }
        else if(phrase[i]>='0' && phrase[i]<='9'){
            so = so + phrase[i];
        }
    }
    cout << chu << " " << so << endl;

    cout << "Ket qua 5: ";
    string phrase_ans5 = phrase;
    for(int i = 0; i < phrase_ans5.length(); i++){
        if(phrase_ans5[i]>='0' && phrase_ans5[i]<='9'){
            if(phrase_ans5[i]=='0'){
                phrase_ans5.erase(phrase_ans5.begin() + i);
                phrase_ans5.insert(i, "khong");
            }
            else if(phrase_ans5[i]=='1'){
                phrase_ans5.erase(phrase_ans5.begin() + i);
                phrase_ans5.insert(i, "mot");
            }
            else if(phrase_ans5[i]=='2'){
                phrase_ans5.erase(phrase_ans5.begin() + i);
                phrase_ans5.insert(i, "hai");
            }
            else if(phrase_ans5[i]=='3'){
                phrase_ans5.erase(phrase_ans5.begin() + i);
                phrase_ans5.insert(i, "ba");
            }
            else if(phrase_ans5[i]=='4'){
                phrase_ans5.erase(phrase_ans5.begin() + i);
                phrase_ans5.insert(i, "bon");
            }
            else if(phrase_ans5[i]=='5'){
                phrase_ans5.erase(phrase_ans5.begin() + i);
                phrase_ans5.insert(i, "nam");
            }
            else if(phrase_ans5[i]=='6'){
                phrase_ans5.erase(phrase_ans5.begin() + i);
                phrase_ans5.insert(i, "sau");
            }
            else if(phrase_ans5[i]=='7'){
                phrase_ans5.erase(phrase_ans5.begin() + i);
                phrase_ans5.insert(i, "bay");
            }
            else if(phrase_ans5[i]=='8'){
                phrase_ans5.erase(phrase_ans5.begin() + i);
                phrase_ans5.insert(i, "tam");
            }
            else if(phrase_ans5[i]=='9'){
                phrase_ans5.erase(phrase_ans5.begin() + i);
                phrase_ans5.insert(i, "chin");
            }
        }
    }
    cout << phrase_ans5 << endl;

    cout << "Ket qua 6: ";
    int arr[100000] = {1};
    for(int i = 0; i < phrase.length(); i++){
        if(arr[i] != -1){
            for(int j = i + 1; j < phrase.length(); j++){
                    if(((phrase[i]>='A' && phrase[i]<='Z') || (phrase[i]>='a' && phrase[i] <= 'z')) && phrase[i]!=' '){
                        if(phrase[j] == phrase[i]){
                            arr[i]++;
                            arr[j] = -1;
                        }
                    }
                    else arr[i] = -1;
            }
        }   
        if(arr[i] != -1){
            cout << "(" << phrase[i] << "-" <<  arr[i] << ")";
            if(i < phrase.length()-1) cout << ", ";
        }
    }
}
