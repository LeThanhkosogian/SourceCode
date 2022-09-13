
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
};

Person create_person_1(string ho_ten, int tuoi)
{
    Person nguoi;
    nguoi.ho_ten = ho_ten;
    nguoi.tuoi = tuoi;
    return nguoi;
}

void create_person_2(Person &person, string ho_ten, int tuoi)
{
    Person &person = person;
    person.ho_ten = ho_ten;
    person.tuoi = tuoi;
}

void copy_person(Person *person_1, Person *person_2)
{
    *person_1 = *person_2;
}

int main()
{
	Person person_1 = create_person_1("Anh Vu", 30);

	Person person_2;
	create_person_2(person_2, "Eimi Fukada", 25);

	Person person_3;
	copy_person(&person_3, &person_2);
	person_3.ho_ten = "Ngoc Trinh";

	cout << "Danh sach person: \n";
	cout << person_1.ho_ten << " - " << person_1.tuoi << " tuoi.\n";
	cout << person_2.ho_ten << " - " << person_2.tuoi << " tuoi.\n";
	cout << person_3.ho_ten << " - " << person_3.tuoi << " tuoi.\n";
}




