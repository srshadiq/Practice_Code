#include<bits/stdc++.h>
using namespace std;
class List{
    list<int> li;
    public:
        void PUSH_BACK() {
            cout << "Enter value to push back: ";
            int v; cin >> v;
            li.push_back(v);

        }
        void PUSH_FRONT() {
            cout << "Enter Value to push front: ";
            int x; cin >> x;
            li.push_front(x);
        }
        void Display() {
            cout << "List Display: " << endl;
            for(auto it = li.begin(); it != li.end(); it++) cout << *it << " ";
            cout << "\n";
        }
        void RDisplay() {
            cout << "List RDisplay: " << endl;
            for(auto it  = li.rbegin(); it != li.rend(); it++) cout << *it << " ";
            cout << "\n";
        }
        void INSERT_BEFORE() {
            cout << "Enter An Existing Element: "; int e; cin >> e;
            auto p = find(li.begin(),li.end(),e);
            if(p==li.end()) cout << "Element not found " << endl;
            else {
                li.insert(p,e);
            }
        }
        void FRONT() {cout << "Front Element is : " << li.front() << endl;}
        void BACK() {cout << "Rear Element is : " << li.back() << endl;}
        void POP_BACK() {li.pop_back();}
        void POP_FRONT() {li.pop_front();}
        void FIND() {
            cout << "Enter value to find ";int v; cin >> v;
            auto p = find(li.begin(),li.end(),v);
            if(p==li.end()) cout << "Element not found" << endl;
            else {
                cout << "Element is found!! Address is " << &p << endl;
            }
        }
};
int main() {
    List li;
    li.PUSH_BACK(); 
    li.PUSH_BACK(); 
    li.PUSH_BACK(); 
    li.PUSH_BACK();
    li.PUSH_BACK(); 
    li.PUSH_BACK(); 
    li.PUSH_BACK(); 
    li.PUSH_BACK();
    li.PUSH_FRONT(); 
    li.PUSH_FRONT();
    li.Display(); 
    li.RDisplay();
    li.FRONT();
    li.BACK(); 
    li.FIND();
    li.POP_BACK(); 
    li.POP_FRONT();
    li.Display();

}