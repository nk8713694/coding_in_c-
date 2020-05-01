// C++ program to find GCD of two numbers such that 
// the second number can be very large. 
#include<bits/stdc++.h> 
using namespace std; 
typedef long long int ll; 

int powerof2(int n)
{
	int count=0;
	while(n%2==0)
	{
		count++
	}
	return count;
}
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int po[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			po[i]=powerof2(a[i]);
		}
		int left[n]={0};
		int right[n]={0};
		
		for(int i=0;i<n;i++)
		{
			
		}
		
	}

} 

