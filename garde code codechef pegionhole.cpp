#include<bits/stdc++.h>
using namespace std;


int main(){
    
    
    unsigned long long n,x;
    vector<unsigned long long > v;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
    	cin>>x;
    	if(n<130)
    	v.push_back(x);
	}
	if(n>=130)
    {
    	cout<<"Yes"<<endl;
    	return 0;
	}
    for(int i=0;i<n;i++)
    {
    	for(int j=i+1;j<n;j++)
    	{
    		for(int k=j+1;k<n;k++)
    		{
    			for(int p=k+1;p<n;p++)
    			{
    				if((v[i]^v[j]^v[k]^v[p])==0)
    				{
    					cout<<"Yes";
    					return 0;
					
					}
				}
			}
		}
	}
	
	cout<<"No";
	}

	

	
