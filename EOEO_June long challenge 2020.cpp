#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll ts;
        cin>>ts;
        ll count=0;
        if(ts==1) cout<<0<<endl;
        else{
        if(ts%2==0){
            while(ts%2==0){
                ts=ts/2;
            }
            count=ts/2;
        }
        else{
                count=ts/2;
        }
        cout<<count<<endl;
    }
}
    return 0;
}
