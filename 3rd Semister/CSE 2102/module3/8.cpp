#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    int n; 
    cout<<"Enter number of schedule: "<<endl; 
    cin>>n; 
    vector<pair<int,int>> vp;
    cout<<"Enter schedule time: "<<endl; 
    for(int i=0;i<n;i++){ 
        int start,end;
        cin>>start>>end;
        vp.push_back(make_pair(start,end));
    }
    sort(vp.begin(),vp.end(),sortbysec);
    int count=0;
    int t=0;
    for (int i = 0; i < n; i++)
    {
        if(vp[i].first>=t){
            count++;
            t=vp[i].second;
            cout << "Talk " << count << ": " << "Starts at " << vp[i].first << ", Ends at " << vp[i].second << endl;
        }
    }
    cout << "Maximum possible Takls " << count << endl;
    
    return 0;
}