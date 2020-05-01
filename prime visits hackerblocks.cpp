#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

void prime_seive(int *p)//it willl give the array containing prime numbers
{
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
	
}
int main() {

int p[1000005]={0};

prime_seive(p);

int csum[1000005]={0};// cummulative sum array 
for(int i=1;i<=1000000;i++)
{
	csum[i]=p[i]+csum[i-1];
}
int q;
cin>>q;
while(q--)
{
	int a,b;
	cin>>a>>b;
	cout<<csum[b]-csum[a-1]<<endl;
}

}

