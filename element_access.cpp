#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {5, 10, 20, 30, 40};
    // cout << myList.back() << endl;
    // cout<<myList.front()<<endl;
    cout << *next(myList.begin(), 2) << endl;

    return 0;
}