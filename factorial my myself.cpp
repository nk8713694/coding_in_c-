#include<bits/stdc++.h>
uisng namespace std;
void multiply(vector<int>&arr,int n)
{
	carry=0;
	for(int i=0;i<arr.size();i++)
	{
		carry+=arr[i];
		arr[i]=carry%10;
		carry=carry/10;
	}
	
}

int main()
{
    scanf("%d",&t);
    while(t--)
    {
    	int n;
        cin>>n;
        vector<int> arr(300);
        arr.push_back(1);
        
        for(int i=2;i<=n;i++)
        {
        	multiply(arr,i);
		}
        
            
    return 0;
}
