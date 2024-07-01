#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40};
    list<int> newList = {300, 400, 500, 600, 700};
    vector<int> v = {1, 2, 3, 4, 5};
    // newList = myList;
    // newList.assign(myList.begin(), myList.end());
    // newList.push_back(100);
    // newList.push_front(5);
    // newList.pop_back();
    // newList.pop_front();
    // newList.insert(next(newList.begin(), 4), {100, 200, 300});
    // myList.insert(next(myList.begin(), 3), v.begin(), v.end());
    // newList.erase(next(newList.begin(), 2), next(newList.begin(), 3));
    // replace(myList.begin(), myList.end(), 20, 50);
    auto it = find(myList.begin(), myList.end(), 20);
     if (it == myList.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }
    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }
    return 0;
}