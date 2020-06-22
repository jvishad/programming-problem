// codeforces solution 1 round 648
// author - vishad0198@gmail.com
// contact no - 7689089780


#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int A[m][n];
        int row[m],col[n];
        memset(row,0,sizeof row);
        memset(col,0,sizeof col);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                    
                cin>>A[i][j];
                if(A[i][j]==1){
                        row[i]=1;
                        col[j]=1;
                    }
                }
                
        }
        int count1=0,count2=0;
        for(int i=0;i<m;i++){
            if(row[i]==0) count1++;
        }
        for(int i=0;i<n;i++){
            if(col[i]==0) count2++;
        }
        int count=min(count1,count2);
        // cout<<count<<  "     " << count1<< "   " << count2<<endl;
        if(count%2==0){
            cout<<"Vivek"<<endl;
        }
        else{
            cout<<"Ashish"<<endl;
        }
    }
    return 0;
}
