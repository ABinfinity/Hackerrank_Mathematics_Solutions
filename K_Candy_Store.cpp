#include<bits/stdc++.h>
#define mod 1000000000
#define ll long long int
using namespace std;
int comb(int n, int k)
{
    int C[n+1][k+1];
    int i, j;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
            {
                C[i][j] = C[i-1][j-1] + C[i-1][j];
                C[i][j]%=mod;
            }
        }
    }
    return (C[n][k]%mod);
}
int main()
{
    ll t,n,k,res;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        res=comb(n+k-1,k);
        cout<<res<<endl;
    }
    return 0;
}
