#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll f(ll n)
{
    if(n==0)
    return 1;
    else
    return n*f(n-1);
}
int main()
{
    ll n;
    cin>>n;
    cout<<f(n)<<endl;
return 0;
}
