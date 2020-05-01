 
#include <bits/stdc++.h> 
using namespace std; 


int main() 
{ 
    int t;
	cin>>t;
	while(t--)
	{
		int n,k,ans=INT_MIN;
		cin>>n>>k;
	    int a[n];
		int sum[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=n-1;i>=0;i--)
		{
			sum[i]=a[i];
			if(i+k < n)
			{
				sum[i]=sum[i]+sum[i+k];
			}
			
			ans=max(ans,sum[i]);
			
		}
		cout<<ans<<endl;
} 
}



