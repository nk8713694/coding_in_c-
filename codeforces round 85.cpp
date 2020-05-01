
#include<bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int n1=n;
		int flag1=1,flag2=1;
		vector<pair<int,int>> v; 
		while(n--)
		{
			int a,b;
			cin>>a>>b;
			v.push_back(make_pair(a,b));
			if(a<b)
			{
			flag1=0;
			}
		}
		if(flag1==1)
		{
		for(int i=0;i<(n1-1);i++)
		{
			if(v[i].first > v[i+1].first)
			{
				flag2=0;
				break;
			}
			
			if((v[i].first == v[i+1].first )&& (v[i].second != v[i+1].second))
			{
				flag2=0;
				break;
			}
			if((v[i+1].first-v[i].first) < (v[i+1].second-v[i].second) ||(v[i+1].second-v[i].second)<0)
			{
				flag2=0;
				break;
			}
		}
		}
		if(flag1==1 && flag2==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0; 
} 

