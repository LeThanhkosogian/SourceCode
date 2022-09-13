#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*
    Kí tự điều khiển:
    \n: xuống dòng
    \t: tab
    \": in ra dấu nháy kép
    \': in ra dấu nháy đơn
    \\: in ra dấu \
    */

   //Thiết lập độ rộng cố định cho kí tự đc in ra: std::setw() ==> include <iomanip>
   cout << left; //right
   cout << setw(20) << "Le Thanh" << " 19\n";
   cout << setw(20) << "Le Thanh ko so gian" << " 19\n";
}