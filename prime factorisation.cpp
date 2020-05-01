#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;

vector<int> prime_seive(int *p,int n)//it willl give the array containing prime numbers
{
	// time complexity O(nloglogn)
	for(int i=3;i<=1000000;i+=2)
	{
		p[i]=1;
	}
	for(ll i=3;i<=1000000;i+=2)
	{
		if(p[i]==1)
		{
			for(ll j=i*i;j<=1000000;j+=i)  // here j=2*i  further  optimisation // j =i*i
			{
				p[j]=0;
			}
		}
	}
	p[2]=1;
	p[1]=p[0]=0;
	vector<int> primes;
	primes.push_back(2);
	for(int i=3;i<=n;i+=2)
	{
		if(p[i])
		primes.push_back(i);
	}
	return primes;
}
vector<int> factorise(int m,vector<int> &primes)
{
	vector<int>factors;
	factors.clear();
	int i=0;
	int p=primes[0];
	
	while(p*p<=m)
	{
		if(m%p==0)
		{
			factors.push_back(p);
			while(m%p==0)
			{
				m=m/p;
			}
		}
		i++;
		p=primes[i];
	}
	//one lst check if m kis a primes
	if(m!=1)
	{
		factors.push_back(m);
	}
	return factors;
}

int main() {
int p[1000005]={0};
int n=1000000,m;
vector<int> primes=prime_seive(p,n);

//cin>>m;// enter the number whose prime factors u  wwant from me or u will die by hunger and i will beat u so hard that u will be fucked up;
m=36;
vector<int> factors=factorise(m,primes);

cout<<"factors are \n";
for(auto i:factors)
{
	cout<<i<<" ";
}

}

