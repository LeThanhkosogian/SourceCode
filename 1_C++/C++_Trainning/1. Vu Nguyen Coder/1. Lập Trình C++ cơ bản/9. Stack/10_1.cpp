#include <iostream>
#include <cmath>

using namespace std;

struct Person {
    string name = "None";
};

int main()
{
    int x = 3;
    float y = 10.5;
    bool z = 'Z';
    string s = "abc";   
    int a[3] = {1, 2, 3};
    Person p;

    cout << "x" << "    " << &x << "   " << x << endl;
    cout << "y" << "    " << &y << "   " << y << endl;
    cout << "z" << "    " << &z << "   " << z << endl;
    cout << "s" << "    " << &s << "   " << s << endl;
    cout << "a[0]" << "    " << &a[0] << "   " << a[0] << endl;
    cout << "a[1]" << "    " << &a[1] << "   " << a[1] << endl;
    cout << "a[2]" << "    " << &a[2] << "   " << a[2] << endl;
    cout << "p" << "    " << &p << "   " << p << endl;
    cout << "p.name" << "    " << &(p.name) << "   " << p.name << endl;
    
}