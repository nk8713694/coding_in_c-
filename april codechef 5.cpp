#include <bits/stdc++.h> 
#define ll long int
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std; 
int main()
{

    ll t, n, i, j, a[100000];

    cin >> t;

    while (t--)
    {

        int ans=0;

        ll sum = 1;

        cin >> n;

        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = 0; i < n; i++)
        {
			sum = 1;
            for (j = 0; j <=i; j++)
            {

                sum = sum * a[j];

                //cout << sum << endl;
            }
            	
				int x=sum/2;
                if (x&1)
                {
				   ans++;
				}
				
        }
	cout<<ans<<endl;
	}

return 0;
}
