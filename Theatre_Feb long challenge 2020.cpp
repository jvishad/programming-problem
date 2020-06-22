#include<bits/stdc++.h>
using namespace std;
int main()
{
    int fs=0;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<char,int> p;
        p['A']=0;
        p['B']=1;
        p['C']=2;
        p['D']=3;
        
        unordered_map<int,int> t;
        t[12]=0;
        t[3]=1;
        t[6]=2;
        t[9]=3;
    int q[4][4];
    memset(q,0,sizeof(q));
         
        for(int i=0;i<n;i++){
            char p1;
            int t1;
            cin>>p1>>t1;
        q[p[p1]][t[t1]]++;
        }
        int arr[4];
        
        int final=INT_MIN;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                  for(int k=0;k<4;k++){
                        for(int l=0;l<4;l++){
                               if(i==j || i==k || i==l || j==k || j==l || k==l) 
                               continue;
                               arr[0]=q[i][0];
                               arr[1]=q[j][1];
                               arr[2]=q[k][2];
                               arr[3]=q[l][3];
                           int b[4];
                             b[0]=arr[0]; b[1]=arr[1]; b[2]=arr[2]; b[3]=arr[3];  
                        int s1=0;
                       
                         
                         sort(b,b+4);
                        //  for(int i=0;i<4;i++)
                        //     {
                        //         cout<<b[i]<<endl;
                        //     }
                        // int count=0;
                        s1=b[3]*100+b[2]*75+b[1]*50+b[0]*25;
                        for(int i=3;i>=0;i--){
                            if(b[i]==0){
                                // count++;
                                s1-=100;
                            } 
                        }
                        final = max(final,s1);

                        }
                }
            
        }
        }
        cout<<final<<endl;
        fs+=final;
    }
    cout<<fs<<endl;
    return 0;
}