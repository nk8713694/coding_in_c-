// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 





int getNumber(int d,int k) 
{ 
	
	const int mod = 1000000007;
	long long int x= (9 * ((pow(10, (n - 1))%mod)/ 2)); 
	x=x%mod;
	long long int count =x/k;
	
	return count%1000000007; 
} 

int main() 
{ 
	long int n,k;
	cin>>n>>k; 

	cout<<getNumber(n,k); 

	return 0; 
} 

