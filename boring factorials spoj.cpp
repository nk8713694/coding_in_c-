#include<bits/stdc++.h>
#define ll long long int
const int mod = 1000000007;
using namespace std;
//calculate a^b
ll power(ll a,ll b,ll m){
	ll ans=1;
	while(b!=0){
		if(b%2==1)
			ans=(ans*a)%m;
		a=(a*a)%m;
		b=b>>1;
	}
	return ans%m;
}
ll solve(ll n,ll p)
{
	ll ans=-1;
	
	for(ll i(n+1);i<=(p-1);i++)
	{
		ll temp=power(i,p-2,p);
		ans=(ans*temp)%p;
	}
	return ans+p;
}

int main() {
	ll t,n,p;
	cin>>t;
	while(t--)
	{
		cin>>n>>p;
		if(n>=p)
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout<<solve(n,p)<<endl;
		}
	}
	
}
