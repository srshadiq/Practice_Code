#include<bits/stdc++.h>
using namespace std;

class bank{
    private:
        int id;
        float amount;
        static int n;
    public:
        bank()
        {
            id =0;
            amount = 0.0;
            // cout << "Initialized empty constractor..."<<endl;
        }
        bank(int x,float y)
        {
            id=x;
            amount=y;
            // cout<<"Initialized parameterized constractor..."<<endl;
        }
        bank(bank &copy)
        {
            id=copy.id;
            amount=copy.amount;
            // cout<<"Copy constractor is used..."<<endl;
        }
        void setIdAmount(int i,float a)
        {
            n++;
            id=i;
            amount=a;

        }
        void changeAmount(float a)
        {
            amount=a;
            cout <<"ID No: "<<id <<endl;
            cout<<"Amount: "<<amount<<endl;
        }
        int getId()
        {
            return id;
        }
        float getAmount()
        {
            return amount;
        }
       
        void displayn()
        {
            cout<<"Total n= "<<n<<endl;
        }
        void displayIdAmount()const
        {
            cout <<"ID: "<<id<<" Amount: "<<amount<<endl;
        }


};
int bank::n=0;
int main()
{
    bank b[5];

    // int x;
    // float y,nA;
    // cout<<"Enter ID: ";
    // cin>>x;
    // cout <<"Enter amount: ";
    // cin>>y;
    // b.setIdAmount(x,y);

    // cout <<"Enter new amount: ";
    // cin>>nA;
    // b.changeAmount(nA);

    // b.displayn();

    // b.displayIdAmountN();
    
    int I;
    float A,TA=0.0;
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter ID: ";
        cin>>I;
        cout <<"Enter amount: ";
        cin>>A;
        b[i].setIdAmount(I,A);
    }

    for (int i = 0; i < 5; i++)
    {
        b[i].displayIdAmount();
    }

    b->displayn();

    for (int i = 0; i < 5; i++)
    {
        TA=TA+b[i].getAmount();
    }
    cout<<"Total Amount is: "<<TA<<endl;

    return 0;

}