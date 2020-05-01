#include <bits/stdc++.h> 
using namespace std; 
#define m 4 
#define n 4 

void spiralPrint(int R, int C, int a[m][n]) 
{ 
 
int startRow=0,endRow=R-1,startCol=0,endCol=C-1;

while(startRow <=endRow && startCol <=endCol)
{
	
	for(int i=startRow;i<=endCol;i++)
	{
		cout<<a[startRow][i]<<", ";
		
	}
	startRow++;
	for(int i=startRow;i<=endRow;i++)
	{
		cout<<a[i][endCol]<<", ";
		
	}
	endCol--;
	
	for(int i=endCol;i>=startCol;i--)
	{
		cout<<a[endRow][i]<<", ";
		
	}
	endRow--;
	
	for(int i=endRow;i>=startRow;i--)
	{
		cout<<a[i][startCol]<<", ";
		
	}
	startCol++;
 }
}



/* Driver program to test above functions */
int main() 
{ 
	int a[m][n] = { {1,2,3,4},
					{5,6,7,8}, 
					{9,10,11,12},
					{13,14,15,16}}; 

	spiralPrint(m, n, a); 
	return 0; 
} 

// This is code is contributed by rathbhupendra 

