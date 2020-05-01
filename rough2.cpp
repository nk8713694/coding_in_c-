#include<bits/stdc++.h>
using namespace std;
int main()
{
     
       //vector<int> arr;
       int n=5;
        vector<int> arr(n);
       for(int i=0;i<n;i++)
       {
       	arr[i]=i+1;
	   }
	   
	   cout<<arr.size()<<endl;
	   arr.push_back(23);
	   arr.push_back(24);
	   cout<<arr.size()<<endl;
    return 0;
}
