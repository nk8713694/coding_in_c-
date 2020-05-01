
#include <bits/stdc++.h> 
#define ll long long int
using namespace std; 
const int mod = 1000000007;

bool comp(ll a,ll b)
{
	return a>b;
}
int main() 
{ 
    ll t;
    cin>>t;
    while(t--)
    {
	
    ll n,i;
    cin>>n;
    ll a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	sort(a,a+n,comp);
	ll sum=0;
	for(ll i=0;i<n;i++)
	{
	
	sum=(sum%mod+max(0ll,(a[i]-i))%mod)%mod;
	}
	
	cout<<sum%mod<<endl;
  }

	return 0;
} 

