#include <iostream>
#define ll long long
#include<vector>
using namespace std;
int main() {
    ll q;
    cin>>q;
    while(q>0){
ll n;
cin>>n;
vector<ll>even,odd;
for(ll i=2;i*i<=n;i++){
    //check for divisor
if(n%i==0){
ll i2=n/i;
if(i2 !=0)
if(i2&1){
    odd.push_back(i2);
}
else{
    even.push_back(i2);
}
if(i&1){
    odd.push_back(i);
}
else{
    even.push_back(i);
}
}
}
odd.push_back(1);
if(n&1){
    odd.push_back(n);
}
else{
    even.push_back(n);
}
ll sum=0;
ll se=even.size()-1;
for(ll i=0;i<=se;i++){
sum=sum+even[i];
}
ll so=odd.size()-1;
for(ll i=0;i<=so;i++){
sum=sum-odd[i];
}
cout<<sum<<endl;
    q--;}
}

