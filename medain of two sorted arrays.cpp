#include<iostream>
using namespace std;
double findMedian(int a[], int n) 
{ 
    if (n % 2 != 0) 
        return (double)a[n / 2]; 
  
    return (a[(n - 1) / 2] + a[n / 2]) / 2.0; 
} 
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	int k1=0,k2=0,k=0;
	int p1=2*n;
	int sum[p1];
	while(k < p1)
	{
		if(a[k1]<b[k2])
		{
			sum[k]=a[k1];
			k1++;
			k++;
		}
		else
		{
		sum[k]=b[k2];
			k2++;
			k++;	
		}
	}
//	for(int i=0;i<(2*n);i++)
//	{
//		cout<<sum[i]<<" ";
//	}
	double x=findMedian(sum,(2*n));
	cout<<x<<endl;
	
}
