/******************************************************************************
************ Bài tập lập trình C++ cơ bản - Bài 13 ***************************
********************** vunguyencoder.com **************************************
[Đề bài]


*******************************************************************************/
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;


struct Person
{
    string name;
    int age;
    float height;
    float weight;
    string nationality;
};

int load_person(string filename, Person *person_list)
{   
    ifstream input;
    input.open("Data.txt");
    
    string line;

    int i = 0;
    while(getline(input, line)){
        string delimiter = "|";

        int check_pos = 0;
        int pos_of_Delimiter = line.find(delimiter);
        while(pos_of_Delimiter != string::npos){
            if(check_pos==0){
                // cout << check_pos << " " << line.substr(0, pos_of_Delimiter) << endl;
                person_list[i].name = line.substr(0, pos_of_Delimiter);
            }
            else if(check_pos==1){
                // cout << check_pos << " " << line.substr(0, pos_of_Delimiter) << endl;
                person_list[i].age = stoi(line.substr(0, pos_of_Delimiter));
            }
            else if(check_pos==2){
                // cout << check_pos << " " << line.substr(0, pos_of_Delimiter) << endl;
                person_list[i].height = stof(line.substr(0, pos_of_Delimiter));
            }
            else if(check_pos==3){
                // cout << check_pos << " " << line.substr(0, pos_of_Delimiter) << endl;
                person_list[i].weight = stof(line.substr(0, pos_of_Delimiter));
            }
        line = line.substr(pos_of_Delimiter+1, line.length()-1);
        pos_of_Delimiter = line.find(delimiter);
        check_pos++;

            //tranh viec ko chay dc check_pos4 do DKVLap
            if(check_pos==4){
                // cout << check_pos << " " << line << endl;
                person_list[i].nationality = line;
            }
        }
        i++;
    }
    input.close();
	return i;
}

void add_person(string filename)
{
    ofstream output;
    output.open("Data.txt", ios::app);

    int so_nguoi_muon_nhap;
    cout << "So nguoi muon nhap: ";
    cin >> so_nguoi_muon_nhap;
    cin.ignore();
    while(so_nguoi_muon_nhap--){
        int t = 5;
        while(t--){
            string data;
            if(t == 4) cout << "Nhap ten: ";
            else if(t == 3) cout << "Nhap tuoi: ";
            else if(t == 2) cout << "Nhap chieu cao: ";
            else if(t == 1) cout << "Nhap can nang: ";
            else if(t == 0) cout << "Nhap quoc tich: ";

            getline(cin, data);
            output << data;
            if(t != 0) output << "|";
            else output << "\n";
        }
    }

    output.close();
}

void print_persons(Person *person_list, int count)
{
    for(int i = 0; i < count; i++){
        cout << "Ten: " << person_list[i].name << endl;
        cout << "Tuoi: " << person_list[i].age << endl;
        cout << "Can nang: " << person_list[i].height << endl;
        cout << "Can nang: " << person_list[i].weight << endl;
        cout << "Quoc tich: " << person_list[i].nationality << endl;
        cout << "===============================================" << endl;
    }
}

int main()
{
	const string filename = "Data.txt";
	const int MAX = 100;
	Person person_list[MAX];

	int count = load_person(filename, person_list);
    cout << count << endl;
	
	int command;
	cout << "Nhap lua chon (1 - Print / 2 - Add): ";
	cin >> command;
    cin.ignore();
	if(command == 1)
	{
		print_persons(person_list, count);
	}
	else if(command == 2)
	{
		add_person(filename);
	}
}
