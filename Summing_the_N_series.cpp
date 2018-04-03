#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

using namespace std;

int main()
{
    ll t,n,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=((n%mod)*(n%mod))%mod;
        cout<<s<<endl;
    }
    return 0;
}
