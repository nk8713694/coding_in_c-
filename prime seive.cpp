#include<iostream>
#include<algorithm>
using namespace std;

void prime_seive(int *p)//it willl give the array containing prime numbers
{
	for(int i=3;i<=1000;i+=2)
	{
		p[i]=1;
	}
	for(long long i=3;i<=1000;i+=2)
	{
		if(p[i]==1)
		{
			for(long long j=i*i;j<=1000;j+=i)  // here j=2*i  further  optimisation // j =i*i
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

for(int i=0;i<100;i++)
{
	if(p[i]==1)
	cout<<i<<" ";
}
}
