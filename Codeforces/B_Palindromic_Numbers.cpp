#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,ans;
        cin>>s;
        if(s[0]!='9'){
            for(int i=0;i<n;i++){
                int x=s[i]-'0';
                int y=9-x;
                ans+=y+'0';
            }
        }
        else{
            int c=0;
            for(int i=n-1;i>=0;i--){
                int x=s[i]-'0';
                x+=c;
                if(x>1){
                    int y=11-x;
                    c=1;
                    ans+=y+'0';
                }
                else{
                    c=0;
                    int y=1-x;
                    ans+=y+'0';
                }
            }
            reverse(ans.begin(),ans.end());
        }
        cout<<ans<<endl;
    }
    return 0;
}