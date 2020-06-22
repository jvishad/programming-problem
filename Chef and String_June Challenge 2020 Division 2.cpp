#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            string s;
            cin>>s;
            int count1=0;
            int s1 = (int)s.size();
            for(int i=0;i<s1;i++){
                if(s[i]=='x' && i+1<s1){
                    if(s[i+1]=='y'){
                        count1++;
                        i++;
                    }
                }
                else{
                    if(s[i]=='y' && i+1<s1){
                    if(s[i+1]=='x'){
                        count1++;
                        i++;
                    }
                }
            }


    }
    cout<<count1<<endl;
}
    return 0;
}
