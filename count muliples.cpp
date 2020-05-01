// C++ program to calculate all multiples 
// of integer 'k' in array[] 
#include <bits/stdc++.h> 
using namespace std; 

// ans is global pointer so that both countSieve() 
// and countMultiples() can access it. 


// Function to pre-calculate all multiples of 
// array elements 
int countSieve(int arr[], int n,int k) 
{ 
	int MAX = *max_element(arr, arr + n); 

	int cnt[MAX + 1]; 
	int ans=0;
	memset(cnt, 0, sizeof(cnt)); 
//
	for (int i = 0; i < n; ++i) 
		++cnt[arr[i]]; 

		for (int j = k; j <= MAX; j += k) 
			ans += cnt[j]; 
			
			
	return ans; 
} 


// Driver code 
int main() 
{ 
	int arr[] = { 2, 4, 9, 15, 21, 20 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	// pre-calculate all multiples 
	

	int k = 2; 
	cout<<countSieve(arr,n,k)<<"\n"; 


	return 0; 
} 

