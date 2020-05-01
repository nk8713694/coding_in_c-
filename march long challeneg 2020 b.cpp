#include<bits/stdc++.h>
using namespace std;
long long int lookUp_[256];

void lookUp(){
    lookUp_[0] = 0;
    for (int i = 0 ; i < 256 ; i++) 
        lookUp_[i] = (i & 1) + lookUp_[i / 2]; 
}


long long int ones(long long int n){
    return (lookUp_[n & 0xff] + lookUp_[(n >> 8) & 0xff] + lookUp_[(n >> 16) & 0xff] + lookUp_[n >> 24]);
}


int main(){
    lookUp_[0] = 0;
    lookUp();
    long long int t;
    scanf("%lld",&t);
    while(t--){
        long long int n,q,p,evenOnes,oddOnes;
        scanf("%lld %lld",&n,&q);

        long long int arr[n];
        long long int ored = 0;
       for(long long int i = 0 ; i < n ; i++){
            scanf("%lld",&arr[i]);
            
        }

        evenOnes = 0;
        oddOnes = 0;

        for (long long int i = 0 ; i < n ; i++){
            if (ones(arr[i]) % 2 == 1) oddOnes += 1;
            else evenOnes += 1;
        }

        while(q--){
            scanf("%lld",&p);
            
            if (ones(p) % 2 == 1)
                printf("%lld %lld\n",oddOnes,evenOnes);
            else
                printf("%lld %lld\n",evenOnes,oddOnes);
            
        }
    }
    return 0;
}
