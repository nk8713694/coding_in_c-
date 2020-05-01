#include<bits/stdc++.h>
#define ll long long
using namespace std;

// find the highest priority element e.i is pivot using binary search:

// a[]={5,6,7,1,2,3,4} ans is 7 its indesx is 2
int main()
{
int a[]={6,7,1,2,3,4,5};
int n=7;
int s=0;
int e=n-1;
while(s<=e)
{
	int mid=(s+e)/2;
	if(mid < e && a[mid]>a[mid+1])
	{
		cout<<mid<<" ";
		break;
	}
	if(mid>s && a[mid]<a[mid-1])
	{
		cout<<mid-1<<" ";
		break;
	}
	if(a[s]>=a[mid])
	{
		e=mid-1;
	}
	else
	{
		s=mid+1;
	}
}
if(s>e)
{
	cout<<"pivot element doesnt exist"<<endl;
}

}

