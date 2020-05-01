#include<iostream>
#include<algorithm>
#include <utility>
#include<vector>
#define vii vector<pair<int,int>> 
#define pii pair<int,int> 
using namespace std;

bool comp(pii a,pii b)
{
	return a.second<b.second;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vii v;
		for(int i=0;i<n;i++)
		{
			int s,e;
			cin>>s>>e;
			v.push_back(make_pair(s,e));
		}
		sort(v.begin(),v.end(),comp);
		int act=1;
		int fin=v[0].second;
		
		for(int i=1;i<n;i++)
		{
			if(v[i].first >= fin)
			{
				fin=v[i].second;
				act++;
			}
		}
		cout<<act<<endl;
		
		
	}
}
