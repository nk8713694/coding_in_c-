#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define maxn 200005
ll n,k,a[maxn];
map<ll,ll>mp[11];
int main(){
cin>>n>>k;
for(int i=1;i<=n;i++){
scanf("%lld",&a[i]);
ll tmp=a[i],len=0;
while(tmp)len++,tmp/=10;
mp[len][a[i]%k]++;
}
ll ans=0;
for(int i=1;i<=n;i++){
ll tmp=a[i],tmp2=a[i],len=0;
while(tmp2)len++,tmp2/=10;
for(int j=1;j<=10;j++){
tmp=tmp*10%k;
ans+=mp[j][(k-tmp)%k];
if(j==len&&a[i]%k==(k-tmp)%k)ans--;
}
 
}
cout<<ans<<endl;
}
