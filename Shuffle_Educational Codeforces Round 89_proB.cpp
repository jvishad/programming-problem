#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        int x,m;
        cin>>n>>x>>m;
        int mxvalue = x;
        int mnvalue = x;
        while(m--){
            int l,r;
            cin>>l>>r;
            if(mnvalue>=l && mnvalue<=r){
                mnvalue=l;
            }
            if(mxvalue>=l && mxvalue<=r){
                mxvalue=r;
            }
        }
        cout<<(mxvalue-mnvalue+1)<<endl;
    }
}