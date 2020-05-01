#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int xor1=0;
	for(int i=0;i<n;i++)
	{
		xor1^=a[i];
	}
	
	int temp=xor1;
	int pos=0;
	while((temp&1)!=1)
	{
		pos++;
		temp=temp>>1;
		
	}
	// the first bit in the xor is at position "pos"
	
	int mask=1<<pos;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]&mask >0)
		{
			ans=ans^a[i];
		}
	}
	int y=xor1^ans;
	
	
}
