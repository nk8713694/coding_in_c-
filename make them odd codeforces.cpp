#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int main() {

int t;
cin>>t;
while(t--)
{
   priority_queue<int>p;
   int n;
   cin>>n;
   int a[n];
   int ans=0;
   for(int i=0;i<n;i++)
   cin>>a[i];
   for(int i=0;i<n;i++)
   {
   	p.push(a[i]);
   }
   while(!p.empty())
   {
   	int number=p.top();
   	p.pop();
   	
   	if(number&1)
   	continue;
   	while(p.top()==number && !p.empty())
   	{
   	p.pop();	
	}
	p.push(number/2);
	ans++;

   }
   	cout<<ans<<endl;
   
}

 
}
