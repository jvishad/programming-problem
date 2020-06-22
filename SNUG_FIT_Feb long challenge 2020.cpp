#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll sum=0;
        cin>>n;
        int *a =new int[n];
        int *b = new int[n];
        int *c = new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n;i++)
        {
            c[i] = min(a[i],b[i]);
            sum = sum +c[i];
        }
        cout<<sum<<endl;
    }
}