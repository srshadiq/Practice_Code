#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t, T=1; cin>>T;
    for(t=1; t<=T; t++) {
        long long int n, odd=0, eve=0;
        cin>>n;
        set<long long int >st;
        st.insert(0LL);
        for(long long int  i=1; i<=n; i++) {
            long long int x;
            cin>>x;
            if(i%2) odd+=x;
            else eve+=x;
            st.insert(odd-eve);
        }
        if(st.size()!=n+1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;;
    }
    return 0;
}
