#include <iostream>
#include <vector>

using namespace std;

struct Person
{
	string name;
	int age;

	Person(string ht, int t){
		name = ht;
		age = t;
	}

};

int main()
{
	vector<int> v = {0, 1, 2, 3, 4, 5};
	
	cout << "Truy cap vao phan tu: ";
	v[0] = 11;
	cout << v[0] << endl;

	cout << "Duyet Vector: ";
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;

	cout << "Them phan tu vao Vector va giong y het list, chi ko co them phan tu vao dau: ";
	v.push_back(6);
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;

	cout << "STRUCT: " << endl;
	//Cac phan tu can phai la con tro
	vector<Person *> Nguoi;
	Person *nguoi_thu_Nhat = new Person("LeThanh", 19);
	Nguoi.push_back(nguoi_thu_Nhat);
	Person *nguoi_thu_Hai = new Person("Ltkosogian", 99);
	Nguoi.push_back(nguoi_thu_Hai);
	
	for(int i = 0; i < Nguoi.size(); i++){
		cout << Nguoi[i]->name << " " << Nguoi[i]->age << endl;
	}

}