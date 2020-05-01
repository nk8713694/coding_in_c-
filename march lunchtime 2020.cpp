#include <bits/stdc++.h> 
using namespace std;

int max_four(int a, int b, int c, int d)
{
 int max;
 if((a>b) && (a>c) && (a>d))
 max = a;
 if((b>a) && (b>c) && (b>d))
 max = b;
 if((c>a) && (c>b) && (c>d))
 max = c;
 if((d>a) && (d>b) && (d>c))
 max = d;
 return max;
}
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int s1,s2;
		cin>>s1>>s2;
		
		int a1=s1/10;
		int a2=s1%10;
		
		int b1=s2/10;
		int b2=s2%10;
		
		int sum1=b1*10 +a2 + a1*10 + b2;
		int sum2=b2*10 + a2+ b1*10 + a1;
		int sum3=a1*10 + b1+ a2*10 + b2;
		int sum4=a1*10+ b2 +b1*10+a2;
		
		int x=max_four(sum1,sum2,sum3,sum4);
		int sum5=a1*10 +a2+b1*10+b2;
		cout<<max(x,sum5)<<endl;
		
	
		
		
	}
    
}
