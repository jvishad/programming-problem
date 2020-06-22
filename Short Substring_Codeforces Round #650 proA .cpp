#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
  
    while(t--){
          vector<char>vec;
        string s;
        cin>>s;
        int p =s.size();
        vec.push_back(s[0]);
        for(int i=1;i<p-1;i++){
            // for(int j=i+1;j<p-1;j++){
                if(s[i]==s[i+1]){
                    vec.push_back(s[i]);
                    i++;
                }
                else{
                    vec.push_back(s[i]);
                }
            // }
        }
        vec.push_back(s[p-1]);
        for(int i=0;i<vec.size();i++){
            cout<<vec[i];
        }
        cout<<endl;
    }
    return 0;
}