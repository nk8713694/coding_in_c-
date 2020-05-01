#include<iostream>
#include<algorithm>
using namespace std;

void prime_seive(int *p,int *count)//it willl give the array containing prime numbers
{
	//p[2]=1;
	for(int i=3;i<=1000000;i+=2)
	{
		p[i]=1;
	}
	for(long long i=3;i<=1000000;i+=2)
	{
		if(p[i]==1)
		{
			for(long long j=i*i;j<=1000000;j+=i)  // here j=2*i  further  optimisation // j =i*i
			{
				p[j]=0;
				//count[j]++;
			}
		}
	}
     p[2]=1;       
	p[1]=p[0]=0;
    for(long long i=2;i<=100;i++)
	{
        //cout<<"I is"<<i<<endl;
		if(p[i]==1)
		{
			for(long long j=i;j<=100;j+=i)  // here j=2*i  further  optimisation // j =i*i
			{
               // cout<<"j is "<<j<<endl;
				p[j]=0;
				count[j]++;
			}
		}
	}

	
}
int main() {

int p[1000005]={0};
int count[10000]={0};
prime_seive(p,count);

//for(int i=0;i<1000;i++)
//{
//	if(p[i]==1)
//	cout<<i<<endl;
//}



  // now simply for each queriies just print count[n] it will give u the no of prime divisors for n:
  cout<<count[15]<<endl;
}
