#include<bits/stdc++.h>
using namespace std;

class A{ 
    private: 
        int x=1; 
    protected: 
        int y=2; 
    public: 
        int z=3; 
} ;
class B:public A{ 
//  //write public 
// method to //access 
// x,y & z 
    public:
        // cout <<"x="<<x<<endl;
        B(){
        cout <<"y="<<y<<endl;
        cout <<"z="<<z<<endl;}


} ;
int main(){ 
 B b;  
return 0; 
}