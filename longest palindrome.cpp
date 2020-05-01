// A C++ dynamic programming 
// solution for longest palindrome 

#include <bits/stdc++.h> 
using namespace std; 



// This function prints the longest palindrome substring 
// It also returns the length of the longest palindrome 
int longestPalSubstr(string str) 
{ 
	int n = str.size(); 
   	int table[n][n]; 
	
	memset(table, 0, sizeof(table)); 


	for (int i = 0; i < n; ++i) 
		table[i][i] = 1; 
		
	for (int i = 0; i < n-1; ++i) 
    { 
        if (str[i] == str[i+1]) 
        { 
            table[i][i+1] = 2;      
        } 
    } 
  		int x;
		for(int j=2;i<n;i++)
		{
			for(int i=0;i<n-j;i++)
			{
				x=i+j
				if(table[i+1][j-1])
			}
		}



// Driver Code 
int main() 
{ 
	string str = "forgeeksskeegfor"; 
	cout<< longestPalSubstr( str ); 
	return 0; 
} 

