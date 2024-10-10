#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

vector<int> ax;
int Menu()
{
    system("cls");
    cout<<"**** Main Menu ****"<<endl; 
    cout<<"1. Insert"<<endl; 
    cout<<"2. Delete"<<endl; 
    cout<<"3. Search"<<endl; 
    cout<<"4. Display list"<<endl; 
    cout<<"5. Exit"<<endl; 
    cout<<"Enter your option: ";
    int x;
    cin>>x;
    return x;
    getch();
}
int SubMenu()
{
    system("cls");
    cout<<"**** Insert Sub Menu ****"<<endl; 
    cout<<"1. Insert at First"<<endl; 
    cout<<"2. Insert at Last"<<endl; 
    cout<<"3. Insert Before"<<endl; 
    cout<<"4. Insert After"<<endl; 
    cout<<"5. Exit"<<endl; 
    cout<<"Enter your option: ";
    int x;
    cin>>x;
    return x;
    getch();
}
void Insert()
{
    int op;
    while(1)
    {
        op=SubMenu();
        if(op==5)break;
        switch(op)
        {
            case 1:
                cout<<"Enter Value: ";
                int f;
                cin>>f;
                ax.insert(ax.begin(),f);
                cout<<"Insert Successfull..."<<endl;
            break;

            case 2:
                cout<<"Enter Value: ";
                int l;
                cin >>l;
                ax.insert(ax.end(),l);
                cout<<"Insert Successfull..."<<endl;
            break;

            case 3:
                cout<<"Enter position and value: ";
                int p1,v1;
                cin>>p1>>v1;
                if(p1>ax.size()||p1<0)
                {
                    cout<<"Invalid Position."<<endl;
                }
                else
                {
                    ax.insert(ax.begin()+p1-1,v1);
                    cout<<"Insert Successfull..."<<endl;
                }
            break;

            case 4:
                cout<<"Enter position and value: ";
                int p2,v2;
                cin>>p2>>v2;
                if(p2>ax.size()||p2<0)
                {
                    cout<<"Invalid Position."<<endl;
                }
                else
                {
                    ax.insert(ax.begin()+p2,v2);
                    cout<<"Insert Successfull..."<<endl;
                }
            break;        
        }
        getch();
    }
    getch();
}
void Delete()
{
    cout<<"Enter value for deletation: ";
    int x,idx=-1;
    cin>>x;
    for (int i = 0; i < ax.size(); i++)
    {
        if(ax[i]==x)
        {
            idx=i;
            ax.erase(ax.begin()+i);
        }
    }
    if(idx<0)
        cout<<"Value not found"<<endl;
    else
        cout<<"Delete Successfull..."<<endl;
    getch();

}
void Search()
{
    cout<<"Enter Value for search: ";
    int x,idx=-1;
    cin>>x;
    for (int i = 0; i < ax.size(); i++)
    {
        if(ax[i]==x)
        {
            idx=i;
            break;
        }
    }
    if(idx<0)
        cout<<"Value not found"<<endl;
    else
        cout<<"Value found at index: "<<idx+1<<endl;
    getch();
}
void Display()
{
    cout<<"Values: ";
    for(auto x:ax)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    getch();
}
int main()
{
    int op;
    for(;;)
    {
        op=Menu();
        if(op==5)break;
        switch(op)
        {
            case 1: Insert();break;
            case 2: Delete();break;
            case 3: Search();break;
            case 4: Display();break;
        }

    }

    return 0;
}