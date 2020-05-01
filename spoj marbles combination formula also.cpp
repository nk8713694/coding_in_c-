
#include <bits/stdc++.h> 
#define ll long long int
using namespace std; 

void comb(ll n,ll k)
{
	ll ans=1;
	if(k>n-k)
	{
		k=n-k;
	}
	for(ll i=1;i<=k;i++)
	{
		ans=ans*(n-i+1);
		ans=ans/i;
	}
	cout<<ans<<endl;
}
int main() 
{ 
    ll t;
    cin>>t;
    while(t--)
    {
	
    ll n,k;
    cin>>n>>k;
    comb(n-1,k-1);
	}

	
} 

