#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	// a is always greater than b
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main(){

  cout<<gcd(3,2);

        
}
