
/*******************************************************************************
************ Bài tập lập trình C++ cơ bản - Bài 11 ****************************
********************** vunguyencoder.com **************************************



*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

struct Person
{
	std::string ho_ten;
	int tuoi;
	
	Person(): ho_ten(""), tuoi(-1) {}
	Person(string ht, int t) : ho_ten(ht), tuoi(t) {}
	
	void print_info()
	{
	    Person test1;
        test1.ho_ten = ho_ten;
        test1.tuoi = tuoi;
        cout << test1.ho_ten << " - " << test1.tuoi << endl;
	}
};

void show_all(Person* person_list, int &n)
{
    int i = 0;
    while(i<n){
            cout << person_list[i].ho_ten << " - " << person_list[i].tuoi << " tuoi." << endl;
            i++;
    }
}

void append(Person* person_list, int &n, Person& new_person)
{
	
	person_list[n].ho_ten = new_person.ho_ten;
	person_list[n].tuoi = new_person.tuoi;
	n++;
}

void remove(Person* person_list, int &n, int i)
{
	for(int j = i; j < n; j++){
		person_list[j].ho_ten = person_list[j+1].ho_ten;
		person_list[j].tuoi = person_list[j+1].tuoi;
	}
	n--;
}

string get_oldest_person(Person* person_list, int &n)
{	
	string max_name = person_list[0].ho_ten;
	int max_tuoi = person_list[0].tuoi;
	for(int i = 0; i < n; i++){
		if(person_list[i].tuoi > max_tuoi){
			max_name = person_list[i].ho_ten;
			max_tuoi = person_list[i].tuoi;
		}
	}
	cout << max_name << " - " << max_tuoi << endl;
}

void sort_person_list_by_age(Person* person_list, int &n)
{	
	string temp_hoten;
	int temp_tuoi;
    for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(person_list[j].tuoi < person_list[i].tuoi){
				temp_hoten = person_list[j].ho_ten;
				person_list[j].ho_ten = person_list[i].ho_ten;
				person_list[i].ho_ten = temp_hoten;

				temp_tuoi = person_list[j].tuoi;
				person_list[j].tuoi = person_list[i].tuoi;
				person_list[i].tuoi = temp_tuoi;
			}
		}
	}
}

// Luu y: ko sua ham main
int main()
{
    const int MAX = 100;
    int count = 0;
	Person person_list[MAX];
	
	Person person_1("Anh Vu", 30);
	Person person_2("Eimi Fukada", 25);
	Person person_3("Ngoc Trinh", 27);
	Person person_4("Khac Tiep", 29);
	
	person_list[0] = person_1;count++;
	person_list[1] = person_2;count++;
	person_list[2] = person_3;count++;
	person_list[3] = person_4;count++;
	
	{
	    cout << "Test 1 - Print first person:\n";
	    person_list[0].print_info();
	}
	
	{
	    cout << "Test 2 - Print all person:\n";
	    show_all(person_list, count);
	}
	
	{
	    cout << "Test 3: Append Tokuda\n";
	    Person person_5("Tokuda", 60);
	    append(person_list, count, person_5);
	    show_all(person_list, count);
	}
	
	{
	    cout << "Test 4: Remove Ngoc Trinh\n";
	    remove(person_list, count, 2);
	    show_all(person_list, count);
	}
	
	{
	    cout << "Test 5 - Oldest person: ";
	    cout << get_oldest_person(person_list, count) << "\n";
	}
	
	{
	    cout << "Test 6 - Sort by age:\n";
	    sort_person_list_by_age(person_list, count);
	    show_all(person_list, count);
	}
}