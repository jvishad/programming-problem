#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(b>a){
            swap(a,b);
        }
        ll ans= (a+b)/3;
        cout<<min(ans,min(a,b))<<endl;
    }
}