 
#include <bits/stdc++.h> 
#define ll	long long
using namespace std; 

ll power(ll a,ll b,ll mod){
	ll ans=1%mod;
	while(b!=0)
	{
		if(b&1)
		{
			ans=(ans*a)%mod;
		}
		a=(a*a)%mod;
		b=b>>1;
	}
	return ans;
}

int main() 
{ 
    int t;
	cin>>t;
	while(t--)
	{
		ll a,n,p;
		cin>>a>>n>>p;
		ll ans=a;
		for(int i=2;i<=n;i++)
		{
			ans=power(ans,i,p);
		}
		cout<<ans%p<<endl;
	}
} 



