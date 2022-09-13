#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	cout << "1. NHAP DU LIEU VAO FILE: \n";
	ofstream output;
	output.open("LeThanh.txt");

	output << "Hello!\n";
	output << "I am Le Thanh\n";

	output.close();
	cout << "Finished!\n";

	cout << "2. LAY DU LIEU TU FILE: \n";
	ifstream input1;
	input1.open("LeThanh.txt");

	string line1; //Tao bien line kieu string de luu

	// getline(input1, line1); //Lay dong thu 1
	// cout << line << "\n";
	// getline(input1, line1); //Lay dong thu 2
	// cout << line << "\n";
	while(getline(input1, line1)){
		cout << line1 << "\n";
	}

	input1.close();
	cout << "Finished!\n";

	cout << "3. NANG CAO: \n";
	ifstream input2;
	input2.open("Nangcao.txt");

	string line2;
	while(getline(input2, line2)){
		string delimiter = ";";
		string info;

		int count = 0;
		int pos_of_Delimiter = line2.find(delimiter);
		while(pos_of_Delimiter != string::npos){
			if(count==0){
				count++;
				info = "Ho ten: ";
			}
			else if(count==1){
				count++;
				info =  "Tuoi: ";
				
			}
			info += line2.substr(0, pos_of_Delimiter);
			cout << info << "\n";
			line2 = line2.substr(pos_of_Delimiter+1, line2.length()-1);
			pos_of_Delimiter = line2.find(delimiter);	

			if(count==2){
				count++;
				info =  "Diem: ";
				cout << info << line2 << "\n";
			}
		}
	}
	input2.close();
	return 0;
}


				