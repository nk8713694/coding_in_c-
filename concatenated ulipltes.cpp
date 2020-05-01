#include <bits/stdc++.h>
//#include <boost/math/common_factor.hpp>
//#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
//using namespace boost::multiprecision;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vint vector <int>
#define vll vector <long long int>
#define endl cout<<'\n'
#define fre(i,l,n) for(long long int i=l;i<n;++i)
#define fr(i,l,n) for(long long int i=l;i<=n;i++)
#define rfre(i,n,l) for(long long int i=n-1;i>=l;i--)
#define rfr(i,n,l) for(long long int i=n;i>=l;--i)
#define tab '\t'
#define debug cout<<'*';
#define s(a) cin>>a
#define p(a) cout<<a
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
typedef pair<long long int,long long int> pll;
typedef pair<int,pair<int,int> > tii;
typedef vector<int> vec;
typedef vector<long long> vecll;
typedef vector<pair<int,int> > vec_pii;
typedef vector<pair<long long int,long long int> > vec_pll;
typedef vector<vector<int> > ugraph;
typedef vector<vector<pair<int,int> > > wgraph;
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define Pi 3.14159265358979
#define gcd(a,b) __gcd(a,b)
#define sf(n) scanf("%lld",&(n))
#define pf(n) printf("%lld\n",(n))
#define min3(a,b,c) (min((c),min((a),(b))))
#define max3(a,b,c) (max((a),max((b),(c))))
#define w(t) while(t--)
#define flt(a) cout<<fixed<<setprecision(a)

 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
    ll n,k,ans=0;
    s(n);s(k);
    ll arr[n];
    ll kd[11];
    ll sz[n];
    vector<ll> pm[11];
    kd[0]=1;


    // Storing the power of 10 upto 10 values to multiply the first number with size of second number to add both of them
    // So that it will look like first number and second number are concatenated
    fr(i,1,10)
    {
    	kd[i]=(kd[i-1]*10)%k;
    }


    // Finding the length of each value and storing in the size array and making a vector of elements of particular size.
    fre(i,0,n)
    {
    	s(arr[i]);
    	ll val=arr[i];
    	ll cnt=0;
    	while(val>0)
    	{
    		cnt++;
    		val/=10;
    	}
    	sz[i]=cnt;
    	pm[sz[i]].pb(arr[i]%k);
    }


    // Sorting the vector based on the value for every size;
    fr(i,1,10)
    {
    	sort(pm[i].begin(),pm[i].end());
    }


    // O(10*n*logn) loop to iterate over every value and for every value considering other values and look whether their 
    // Concatenation are divisible ny k or not.
    fre(i,0,n)
    {
    	fr(j,1,10)
    	{
    		ll part1=(arr[i]*kd[j])%k;
    		ll part2=(k-part1)%k;


    		auto lo=lb(pm[j].begin(),pm[j].end(),part2); // Lowest value satisfying the condition
    		auto hi=ub(pm[j].begin(),pm[j].end(),part2); // Highest value satisying the condition

    		ans+=(hi-lo);


    		// To remove the case where same value considered for concatenation.
    		if(sz[i] == j && (part1 + arr[i] %k)%k==0)
    		{
    			ans--;
    		}
    	}
    }
    p(ans);endl;
	return 0;
}
