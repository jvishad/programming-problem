#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        if(a>b){
            swap(a,b);
        }
    int i=0;
    while(a<=n || b<=n){
        if(i%2==0){
            a+=b;
        }
        else{
            b+=a;
        }
        i++;
    }
    cout<<i-1<<endl;
    }
    return 0;
}