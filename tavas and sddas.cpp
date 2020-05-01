#include <bits/stdc++.h> 
#define ll long int
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std; 
int main()
{

    
	char ch[20];
	cin>>ch;
	int len=strlen(ch);
	int ans=0;
	ans=(1<<len)-2;
	
	// iterate ove rthe numbers from unit place;
	for(int i=len-1,pos=0;i>=0;i--,pos++)
	{
		if(ch[i]=='7')
		{
			ans +=(1<<pos);
		}
	}
	cout<<ans+1<<endl;

return 0;
}
