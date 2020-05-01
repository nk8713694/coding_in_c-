#include <bits/stdc++.h> 
using namespace std;

int fun1(string s,int k){ 
    int len=s.length(); 
    int lp=0,rp=0;             // initialize left and right pointer to 0 
    int ans=0; 
    int hash_char[26]={0};     // an array to keep track of count of each alphabet 
    for(;rp<len;rp++){ 
        hash_char[s[rp]-'a']++; 
        while(hash_char[s[rp]-'a']>k){ 
            hash_char[s[lp]-'a']--;   // decrement the count  
            lp++;         //increment left pointer  
        } 
        ans+=rp-lp+1; 
    } 
    return ans; 
} 
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int x,k;
		cin>>s;
		cin>>k>>x;
		
		int a[26];
		for(int i=0;i<s.length();i++)
		{
			a[s[i]-'a']++;
		}
		
		if(k==0)
		{
			cout<<fun1(s,x)<<endl;
		}
		

	}
    
}
