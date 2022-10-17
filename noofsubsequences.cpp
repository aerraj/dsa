#include <bits/stdc++.h>
using namespace std;
int f(int ind,int *arr,int n,int k,int sum)
{
if(ind==n)
{
    if(sum==k)
    return 1;
    else
    return 0;
}
sum=sum+arr[ind];
int l=f(ind+1,arr,n,k,sum);
sum=sum-arr[ind];
int r=f(ind+1,arr,n,k,sum);
return l+r;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int k;
    cin>>k;
    int sum;
    sum=0;
    int g=f(0,a,n,k,sum);
    cout<<g<<endl;
return 0;
}
