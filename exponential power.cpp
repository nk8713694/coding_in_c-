#include<bits/stdc++.h>
using namespace std;

int power(int n,int m)
{
	if(m==0)
	return 1;
	int smallAns=power(n,m/2);
	smallAns*=smallAns;
	if(m&1)
	{
		smallAns*=n;
	}
	//n=n/2;
	return smallAns;
}
int main()
{
	cout<<power(2,5)<<endl;
}
