#include <bits/stdc++.h>
using namespace std;
bool f(int ind,int *arr,vector<int>ds,int n,int k,int sum)
{
    if(ind>=n)
    {
        if(sum==k)
        {
            for(auto it:ds)
            cout<<it<<" ";
            cout<<endl;
            return true;
        }
        else
        return false;
    }
    ds.push_back(arr[ind]);
sum=sum+arr[ind];
if(f(ind+1,arr,ds,n,k,sum)==true)
return true;
ds.pop_back();
sum=sum-arr[ind];
if(f(ind+1,arr,ds,n,k,sum)==true)
return true;

return false;

};
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    cin>>a[i];
    vector<int>ds;
    int sum=0;
    int k;
    cin>>k;
    f(0,a,ds,n,k,sum);
return 0;
}
