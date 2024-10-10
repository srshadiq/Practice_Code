#include<bits/stdc++.h>
using namespace std;

class udemy
{
    int height=4;
    public:
    friend void printing(udemy op);
};
void printing(udemy op)
{
    cout << op.height<<endl;
}

class s{
    private:
        int length,width;
    public:
        static int n;
        s(int l,int w)
        {
            length=l;
            width=w;
            n++;
        }
        int volume()
        {
            return length*width;
        }

};
int s::n=0;
int main()
{
    udemy op;
    printing(op);
    s s1(4,5);
    s s2(10,2);
    cout <<"count value is: "<<s::n<<endl;
    cout <<"Volume is: "<<s1.volume()<<endl;


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    

    return 0;
}