#include <bits/stdc++.h> 
#define ll long int
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std; 

int main() 
{ 
  	FASTIO;
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    if(n==1)
    {
        //cout<<"1"<<endl;
        printf("1\n");
    	//cout<<"1"<<" "<<"1"<<endl;
    	printf("1 1\n");
	}
	else if(n==2)
	{
        
        printf("1\n");
		//cout<<"2"<<" "<<"1"<<" "<<"2"<<endl;
		printf("2 1 2\n");
	}
	else if(n==3)
	{
       
        printf("1\n");
		//cout<<"3"<<" "<<"1"<<" "<<"2"<<" "<<"3"<<endl;
		printf("3 1 2 3\n");
	}
	else
	{
        //cout<<(n/2)<<endl;
        printf("%d\n",n/2);
		printf("3 1 2 3\n");
		
		if(n%2==1)
		{
		
		for(int i=4;i<n;i+=2)
		{
			//cout<<"2"<<" "<<i<<" "<<(i+1)<<endl;
			printf("2 %d %d\n",i,(i+1));
		}
		}
		else
		{
			for(int i=4;i<=n;i+=2)
			{
			if(i!=n)
			printf("2 %d %d\n",i,(i+1));
			else
			printf("1 %d\n",n);
			}	
		}
	}
   
  }
return 0;
} 
