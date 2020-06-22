#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;
		int x;
		int p=0,q=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
		}
		for(int i=0;i<n;i++)
		{
			if(x==a)
			{
				++p;
			}
			if(x==b)
			{
				++q;
			}
		}
		cout<<(double(p/n)*double(q/n))<<endl;
	}
}
