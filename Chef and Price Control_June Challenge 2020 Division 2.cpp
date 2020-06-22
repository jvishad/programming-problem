#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int x;
        int sum=0;
        vector<int> vec;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
            vec.push_back(x);
        }
        int sum1=0;
        for(int i=0;i<n;i++){
            if(vec[i]>k){
                vec[i]=k;
            }
            sum1+=vec[i];
        }
        cout<<sum-sum1<<endl;
    }
    return 0;
}
