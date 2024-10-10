#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class game
{
    private:
        int speed=0;
    public:
        void speedup()
        {
            speed++;
            // cout <<".";
        }
        void operator ++()
        {
            speed++;
        }
        void operator --()
        {
            speed--;
        }
        void speedDown()
        {
            speed--;
        }
        void getspeed()
        {
            cout<<"Speed= "<<speed<<endl;
            // cout <<".";

        }
};
int main()
{
    game g;
    char ch;
    g.getspeed();
    for(;;)
    {
        ch=getch();
        if(ch=='w'||ch=='u')
        {
            // g.speedup();
            ++g;
        }
        
        if(ch=='s'||ch=='d')
        {
            // g.speedDown();
            --g;
        }
        g.getspeed();
        

    }


    return 0;
}