#include<bits/stdc++.h>
using namespace std;

void rotate(string &arr,int n,int d){
if(d<=0 || d>=n) return;
if(d>n/2) d=n-d;
int swapTo=0,swapFrom=d;
while(swapFrom<n)
swap(arr[swapTo++],arr[swapFrom++]);
if(n%d==0) return;
swapFrom=n-(n%d);
while(swapFrom<n)
swap(arr[swapTo++],arr[swapFrom++]);
}
int main(){

 
 string arr="abcde";

 rotate(arr,arr.length(),3);
 cout<<arr<<endl;
        
}
