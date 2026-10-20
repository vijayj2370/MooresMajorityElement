// MooresMajorityElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int>& arr) {

    int ele = -1;
    int count = 0;

    for (auto num : arr) {
        if (count == 0) {
            ele = num;
            count = 1;
        }
        else if (num == ele)
            count++;
        else
            count--;
    }

    int cnt = 0;
    for (auto i : arr) 
        if (i == ele) cnt++;
    
    if (cnt > (arr.size() / 2))
        return ele;
    else
        return -1;


}

int main()
{
    vector<int> arr{ 1, 1, 2, 1, 3, 5, 1 };

    cout << majorityElement(arr) << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
