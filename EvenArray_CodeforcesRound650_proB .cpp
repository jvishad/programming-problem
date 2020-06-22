#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int x;
      vector<int>vec;
      int count1=0;
      int count2=0;
      for(int i=0;i<n;i++){
          cin>>x;
          vec.push_back(x);
      }
      if(n==1){
          if(vec[0]%2==0){
              cout<<0<<endl;
          }
          else{
          cout<<-1<<endl;
          }
      }
      else{
      for(int i=0;i<n;i++){
          if(i%2==0){
              if(vec[i]%2!=0){
                  count1++;
              }
          }
          else{
              if(vec[i]%2==0){
                  count2++;
              }
          }
      }
      if(count1==count2){
          cout<<count1<<endl;
      }
          else{
              cout<<-1<<endl;
          }
    
    }
    cout<<endl;
    }
    return 0;
}