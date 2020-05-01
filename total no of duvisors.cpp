#include<iostream>
#include<algorithm>
using namespace std;

void divisors(int *p,int *count)//it willl give the array containing prime numbers
{
	
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j+=i)
		{
			count[j]++;
		}
	}
}
int main() {

int p[1000005]={0};
int count[10000]={0};
prime_seive(p,count);


  cout<<count[15]<<endl;
}
