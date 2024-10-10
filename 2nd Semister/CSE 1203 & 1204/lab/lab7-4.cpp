#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void Display(list<int> g)
{
    // list<int>::iterator p;
    for (auto p = g.begin(); p != g.end(); p++)
    {
        cout << *p << ' ';
    }
    cout << endl;
}
void revDisplay(list<int> g)
{
    // list<int>::iterator p;
    for (auto p = g.rbegin(); p != g.rend(); p++)
    {
        cout << *p << ' ';
    }
    cout << endl;
}
bool isSame(int x)
{
    if (x == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isEven(int i)
{
    if (i % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool compare(int i,int j){
    return i==j;
}
int main()
{
    list<int> a;
    list<int> b;
    b.assign(10,10);
    //array<int,5>arr={2,3,4,5,6};
    list<int>::iterator s;
    list<int>::iterator q;
    for (int i = 0; i < 8; i++)
    {
        int x;
        cout << "Enter element: " << i + 1 << ' ';
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < 2; i++)
    {
        int x1;
        cout << "Enter element: " << i + 1 << ' ';
        cin >> x1;
        a.push_front(x1);
    }
    s = find(a.begin(), a.end(), 6);
    if (s != a.end())
    {
        cout << "Element was found in: " << distance(a.begin(), s) + 1 << endl;
    }
    else
    {
        cout << "Element didn't found\n";
    }
    // a.assign(arr.begin(),arr.end());
    Display(a);
    // a.assign(b.begin(),b.end());
    // Display(a);
    q = a.begin();
    // s=next(s);
    //  a.insert(q,30);
    //  advance(q,3);
    //  a.insert(q,50);
    a.unique(compare);
    a.sort();
    auto l = find(a.begin(), a.end(), 5);
    a.erase(l);
    int count = count_if(a.begin(), a.end(), isSame);
    cout << "Total 4 found: " << count << " times\n";
    int count1 = count_if(a.begin(), a.end(), isEven);
    cout << "Total even numbers are : " << count1 << endl;
    remove_if(a.begin(), a.end(), isSame);
    // for(int i=0;i<4;i++){
    //     auto d=a.begin();
    //     a.erase(d);
    // }
    cout << a.front() << ' ' << a.back() << endl;
    Display(a);
    revDisplay(a);
    return 0;
}