#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> li = {1, 2, 3, 4, 5};

	li.push_back(6); //Them vao sau
		for(int x : li)
	{
		cout << x << " ";
	}

	li.push_front(0); //Them vao truoc
		for(int x : li)
	{
		cout << x << " ";
	}

	list<int>::iterator it = li.begin(); //Tro vao phan tu dau tien, iterator: bien lap

	it++; //Di chuyen bien interator den vi tri 1
	li.insert(it, 99); // chen vao vi tri bien interator
		for(int x : li)
	{
		cout << x << " ";
	}

	it++; //Di chuyen bien interator den vi tri 2
	li.erase(it); //Xoa 
		for(int x : li)
	{
		cout << x << " ";
	}
	cout << "SIZE OF LIST" << li.size() << endl;

}