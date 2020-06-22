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
        int n;
        cin>>n;
        int A[n];
        bool flag=true;
        bool flag1 =false;
        bool flag2 =false;
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        bool B[n];
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        for(int i=0;i<n;i++){
        if(B[i]!=0){
            flag2=true;
        }
    }
    for(int i=0;i<n;i++){
        if(B[i]!=1){
            flag1=true;
        }
    }
    for(int i=0;i<n-1;i++){
        if(A[i]>A[i+1]){
            flag=false;
            break;
        }
    }
    if(flag1 && flag2)
			cout << "Yes" << endl;
	else if(flag)
			cout << "Yes" << endl;
	else
			cout << "No" << endl;
    }
    
    return 0;
}
