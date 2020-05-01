/* C++ Program to find the number of elements 
in a range L to R having the Kth bit as set */
#include <bits/stdc++.h> 
using namespace std; 

vector<int>ans;
// Maximum bits required in binary represention 
// of an array element 
#define MAX_BITS 32 

/* Returns true if n has its kth bit as set, 
else returns false */
bool isKthBitSet(int n, int k) 
{ 
	if (n & (1 << (k - 1))) 
		return true; 
	return false; 
} 


/* Returns the answer for each query with range L 
to R querying for the number of elements with 
the Kth bit set in the range */
void answerQuery(int L, int R, int K, int arr[]) 
{ 
	// counter stores the number of element in 
	// the range with the kth bit set 
	int counter = 0; 
	for (int i = L; i <= R; i++) { 
		if (isKthBitSet(arr[i], K)) { 
			counter++; 
		} 
	} 
	ans.push_back(counter);
} 

// Print the answer for all queries 
void answerQueries(int queries[][3], int Q, 
				int arr[], int N) 
{ 
	int query_L, query_R, query_K; 

	for (int i = 0; i < Q; i++) { 
		query_L = queries[i][0] - 1; 
		query_R = queries[i][1] - 1; 
		query_K = queries[i][2]; 

		cout << "Result for Query " << i + 1 << " = "
			<< answerQuery(query_L, query_R, query_K, arr) 
			<< endl; 
	} 
} 

// Driver Code 
int main() 
{ 
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	int queries[N][3];
	for(int i=0;i<n;i++)
	{
		for
	}
		
	int Q = sizeof(queries) / sizeof(queries[0]); 

	answerQueries(queries, Q, arr, N); 

	return 0; 
} 

