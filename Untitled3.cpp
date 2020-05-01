#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> a(n);
		int sum=0;
		for(int i=0;i<n/2;i++)
		{
			a[i]=2*(i+1);
			sum=sum+a[i];
		}
		int val=0,flag=0;
		for(int i=n/2;i<n;i++)
		{
			
			if(i==n-1)
			{
				if(sum%2!=0)
				{
					a[i]=sum;
					flag=1;
				}
			}
			else
			{
				a[i]=(2*val)+1;
				val++;
				sum=sum-a[i];
			}
		}
		if(flag==0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
			for(int i:a)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}
		
}
}

