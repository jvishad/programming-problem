#include<bits/stdc++.h>
using namespace std;
#define ll long long
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int main()
{
    int t; cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
        }
        cout<<(n/2)<<endl;
        
    }
}