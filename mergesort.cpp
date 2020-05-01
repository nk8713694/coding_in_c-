#include<bits/stdc++.h>
using namespace std;

void merge(int *a,int s,int e)
{
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	int k=s;
	int temp[100];
	while(i<=mid && j<=e)
	{
		if(a[j]<a[i])
		{
			temp[k++]=a[j++];
		}
		else
		{
			temp[k++]=a[i++];
		}
	}
	while(i<=mid)
	{
		temp[k++]=a[i++];
	}
	while(j<=e)
	{
		temp[k++]=a[j++];
	}
	for(int i=s;i<=e;i++)
	{
		a[i]=temp[i];
	}
}
void mergesort(int a[],int s,int e)
{
	if(s>=e)
	return;
	int mid=(s+e)/2;
	mergesort(a,s,mid);
	mergesort(a,mid+1,e);
	merge(a,s,e);
}
int main()
{
	int n;
	n=5;
	int a[5]={1,3,4,2,9};
	mergesort(a,0,4);
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
}
