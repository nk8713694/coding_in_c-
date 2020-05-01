#include<iostream>
#include<algorithm>
using namespace std;

void bubble_sort(int a[],int n)
{
	if(n==1)
	return;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		swap(a[i],a[i+1]);
	}
	
	bubble_sort(a,n-1);
}

void bubble_sort2(int a[],int j,int n)
{
	if(n==1)
	return;
	if(j==n-1)
	{
		bubble_sort2(a,0,n-1);
	}
	if(a[j]>a[j+1])
	{
		swap(a[j+1],a[j]);
	}
	
	bubble_sort2(a,j+1,n);
	
	return;
}
int main() {

int arr[]={4,2,3,5,1};
bubble_sort(arr,5);

}
