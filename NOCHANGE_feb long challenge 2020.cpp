#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long n,p,i,k;
        cin>>n>>p;
        long d[n];
        for(i=0;i<n;i++) cin>>d[i];
        int sum=0;
        long c[n];
        memset(c,0,sizeof(c));
        for(i=n-1;i>=0;i--)
        {
            if(p%d[i]!=0)
            {
            c[i]=p/d[i]+1;
            break;
            }
            else
            {
            
            c[i]=p/d[i]-1;
            p=p-(c[i]*d[i]);
                
            }
            }
            // for(int i=0;i<n;i++)
            // {
            //     sum = sum + c[i]*d[i];
            // }
            if(i==-1)
            {
                 cout<<"NO"<<endl;
                // cout<<"YES"<<" ";
                // for(k=0;k<n;k++)
                // cout<<c[k]<<" ";
                // cout<<endl;
            }
            else
            {
                cout<<"YES"<<" ";
                for(k=0;k<n;k++)
                cout<<c[k]<<" ";
                cout<<endl;
                // cout<<"NO"<<endl;
            }
        
        
    }
    return 0;
}