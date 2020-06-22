#include<bits/stdc++.h>
#include<iostream>
using namespaces std;
bool helper(char [],int,int);
bool checkPalindrome(char input[]){
    bool ans= helper(input,0,strlen(input)-1);
    return ans;
}
bool helper(char input[],int start,int end)
{
    if(start>=end)
        return true;
    if(input[start]==input[end])
    {
        bool ans = helper(input,start+1,end-1);
            return ans;
    }
    else
        return false;
}
int main()
{
	char input[50];
	cin>>input;
	
	if(checkPalindrome(input))
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
}

