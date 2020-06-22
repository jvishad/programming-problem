#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        queue<int>q1,q2;
        for(int i=1;i<=(n*n);i++){
            if(i%2!=0){
                q1.push(i);
            }
            else {
                q2.push(i);
            }
        }
        int x,y;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<=n+i;j++){
                if(j%2!=0){
                    x=q1.front();
                    q1.pop();
                    cout<<x<<" ";
                }
                else{
                    y=q2.front();
                    q2.pop();
                    cout<<y<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
