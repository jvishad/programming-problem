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
            bool flag=false;
            bool flag1 =false;
            vector<int> vec,vec1,vec2,vec3;
            for(int i=0;i<n;i++){
                cin>>x;
                vec.push_back(x);
            }
            for(int i=0;i<n;i++){
                if(vec[i]==5){
                    vec1.push_back(5);

                }
                else{
                    if(vec[i]==10){
                        vec2.push_back(5);
                        if(!vec1.empty()){
                            vec1.pop_back();
                        }
                        else{
                            flag=true;
                            break;
                        }
                    }
                    else{
                        if(vec[i]==15){
                            vec3.push_back(15);
                            if(!vec2.empty()){
                                vec2.pop_back();
                            }
                            else{
                                if(!vec1.empty()){
                                    vec1.pop_back();
                                    if(!vec1.empty()){
                                        vec1.pop_back();
                                    }
                                    else{
                                        flag1=true;
                                        break;
                                    }
                                }
                                else{
                                    flag1=true;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        if(flag==true || flag1==true){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
