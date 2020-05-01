#include<bits/stdc++.h>
using namespace std;

void subsequences(char *inp,char *op,int i,int j)
{
	// base case
	if(inp[i]=='\0')
	{
		op[j]='\0';
		cout<<op<<" ,";
		return;
	}
	// now recursive case
	// innclude
	op[j]=inp[i];
	subsequences(inp,op,i+1,j+1);
	// exclude
	subsequences(inp,op,i+1,j);
}
int main()
{
	
	char inp[100];
	cin>>inp;
	char op[100];
	subsequences(inp,op,0,0);
}
