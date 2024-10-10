#include<bits/stdc++.h>
using namespace std;
class sum{
    private:
        int x,y,z;
    public:
        void add()
        {
            cout<<"Enter two number:"<<endl;
            cin>>x;
            cin>>y;
            z=x+y;
            cout<<"Sum : "<<z<<endl;
        }
};

int main()
{
    sum ad;
    ad.add();

    return 0;
}