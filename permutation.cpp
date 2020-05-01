#include<bits/stdc++.h>
#define ll long long
using namespace std;

void permute(char *inp,int i)
{
	if(inp[i]=='\0')
	{
		cout<<inp<<endl;
		return;
	}
	for(int j=i;inp[j]!='\0';j++)
	{
		swap(inp[i],inp[j]);
		permute(inp,i+1);
		//backtracting
		swap(inp[i],inp[j]);
	}
}

int main()
{
 char inp[]="abc";
  permute(inp,0);
}

