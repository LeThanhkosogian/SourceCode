
/*******************************************************************************
************ Bài tập lập trình C++ cơ bản - Bài 16 ****************************
********************** vunguyencoder.com **************************************

*******************************************************************************/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> a, int target, int start)
{
    int ans;
    int min = 999999;
    for(int i = 0; i < a.size(); i++){
        if((a[i] == target) && (min > abs(i-start))){
            min = abs(i-start);
            ans = i;
        }
    }
    cout << ans;
    return ans;
}

int main()
{
	cout << "Test 1: " << (solution({1, 2, 3, 4, 5}, 5, 3) == 4 ? "Pass" : "Failed") << "\n";
	cout << "Test 2: " << (solution({1}, 1, 0) == 0 ? "Pass" : "Failed")  << "\n";
	cout << "Test 3: " << (solution({1, 1, 1, 1, 1 }, 1, 0) == 0 ? "Pass" : "Failed")  << "\n";
	cout << "Test 4: " << (solution({5, 2, 8, 4, 7, 5, 6 , 5}, 5, 4) == 5 ? "Pass" : "Failed")  << "\n";
}









