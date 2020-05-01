#include<bits/stdc++.h>
using namespace std;
vector<int> getPrimesUpTo(int n){
    vector<int> primes(n+1,1);
    for (int p=2; p*p<=n; p++) { 
        if (primes[p] == 1) {  
            for (int i=p*p; i<=n; i += p) 
                primes[i] = 0; 
        } 
    }
    primes[0] = 0;
    primes[1] = 0;
    return primes;
}

int main(){
    vector<int> primes = getPrimesUpTo(100000);
    
    for(int i=0;i<100000;i++)
    {
    	if(primes[i]==1)
    	{
    		cout<<i<<" ";
		}
	}
    
    
    return 0;
}
