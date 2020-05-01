
#include <bits/stdc++.h> 
using namespace std; 

// driver code 
int main() 
{ 
    // b is converted into a
	string s1;
	string s2;
	cin>>s1>>s2;
	map<char,int> m1;
	map<char,int> m2;
		int flag=0;
		
		if(s1.length()>s2.length())
		{
			flag=1;
		}
		else
		{
		
	for(int i=0;i<s2.length();i++)
	{
		m1[s2[i]]==0;
	}
	for(int i=0;i<s1.length();i++)
	{
		m1[s1[i]]++;
	}
	for(int i=0;i<s2.length();i++)
	{
		m2[s2[i]]++;
	}

	for(int i=0;i<s1.length();i++)
	{
		if(m1[s1[i]]<m2[s1[i]])
		{
			flag=0;
			//break;
		}
		else
		{
			flag=1;
			break;
		}
	}
}
	
	if(flag==0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	
} 

