#include<bits/stdc++.h>
using namespace std;
class father
{
    private:
        int money=1;
    protected:
        int gold=2;
    public:
        int land=3;

};
class son:public father
{
    public:
    // int getMoney()
    // {
    //     return money;
    // }
    int getGold()
    {
        return gold;
    }
    int getLand()
    {
        return land;
    }


};
class grandson: private son
{
    public:
    int getGold()
    {
        return gold;
    }
    int getLand()
    {
        return land;
    }

};
int main()
{
    son s;
    grandson g;
    cout <<s.getGold()<<endl;
    cout <<s.getLand()<<endl;
    cout <<g.getGold()<<endl;
    cout <<g.getLand()<<endl;

    return 0;
}