#include<bits/stdc++.h>
using namespace std;
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}	
		int left[n],right[n];
		left[0]=1;
		for(int i=1;i<n;i++)
		{
			if(a[i]>=a[i-1])
			{
				left[i]=left[i-1]+1;
			}
			else
			{
				left[i]=1;
			}
		}
		right[n-1]=1;
		for(int i=n-2;i>=0;i--)
		{
			if(a[i]>=a[i+1])
			{
				right[i]=right[i+1]+1;
			}
			else
			{
				right[i]=1;
			}
		}
		int max1=-9999;
		for(int i=0;i<n;i++)
		{
			max1=max(max1,(left[i]+right[i]));
		}
		cout<<(max1-1)<<endl;
	}
}
