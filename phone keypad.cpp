#include<bits/stdc++.h>
#define ll long long
using namespace std;

char c[][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void printkeypadString(char *inp,char *op,int i,int j)
{
	if(inp[i]=='\0')
	{
		op[j]='\0';
		cout<<op<<endl;
		return;
	}
	int digit=inp[i]-'0';
	for(int k=0;k<c[digit][k]!='\0';k++)
	{
		op[j]=c[digit][k];
		
		printkeypadString(inp,op,i+1,j+1);
	}
}
int main()
{
	char ch[100];
	char op[100];
	cin>>ch;
	printkeypadString(ch,op,0,0);
}
