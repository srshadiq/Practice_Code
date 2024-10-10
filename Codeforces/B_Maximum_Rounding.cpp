#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,a;
        cin >>s;
        int n=s.length();
        s.push_back('0');
        for (int i = n; i > 0; i--)
        {
            s[i]=s[i-1];
        }
        s[0]='0';
        a=s;
        for (int i = n; i >0; i--)
        {
            if(s[i]>='5')
            {
                s[i-1]=s[i-1]+1;
                
                if(s[i-1]=='9')
                {
                    for (int j = i; j >=0; j--)
                    {
                        if(s[j]<'9')
                        {
                            s[j]=s[j]+1;
                            break;
                        }
                    }
                    
                }
                s[i]='0';
            }
            s[i]='0';
            if(s>a)
            {
                a=s;
            }

        }
        
        if(a[0]=='0')
        {
             for (int i = 0; i <n; i++)
            {
                a[i]=a[i+1];
            }
        }
        // if(a=="11")
        // {
        //     cout <<"1"<<endl;
        // }
        // else if(a=="22")
        // {
        //     cout <<"2"<<endl;
        // }
        // else if(a=="33")
        // {
        //     cout <<"3"<<endl;
        // }
        // else if(a=="44")
        // {
        //     cout <<"4"<<endl;
        // }
        // else
        // {
        cout <<a<<endl;

        // }

    }
    return 0;
}