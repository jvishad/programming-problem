#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x;
        vector<int> vec1,vec2;
        int A[2*n];
        for(int i=0;i<2*n;i++){
            cin>>A[i];
            if(A[i]%2){
                vec1.push_back(i+1);
            }
            else{
                vec2.push_back(i+1);
            }
        }
        int p = n-1;
        int vec1v = vec1.size();
        int vec2v = vec2.size();
        for(int i=0;i<vec1v-1;i+=2){
            if(p){
            cout<<vec1[i] << " " << vec1[i+1]<<endl;
            --p;
            }
        }
        for(int i=0;i<vec2v-1;i+=2){
            if(p){
            cout<<vec2[i] << " " << vec2[i+1]<<endl;
            --p;
            }
        }
    }
}