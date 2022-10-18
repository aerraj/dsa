#include <bits/stdc++.h>
using namespace std;
//datatypes
typedef long long ll;
typedef long double lld;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpl;
typedef map<ll, ll> mapl;
#define very ios_base::sync_with_stdio(false); 
#define fast cin.tie(NULL);
#define IO cout.tie(NULL);


int main() {
very fast IO
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int k;
cin>>k;
int c=0;
int A[n];
for(int i=0;i<n;i++)
{
    cin>>A[i];
    if(A[i]==1)
    {
        c++;
    }

}
if(c==0)
cout<<"NO";
else
cout<<"YES";
cout<<endl;

}
}