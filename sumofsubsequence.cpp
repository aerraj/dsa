#include <bits/stdc++.h>
using namespace std;
void printf(int ind,vector<int>&ds,int *arr,int sum,int k,int n)
{
    if(ind==n)
    {
    if(k==sum)
    {
    for(auto it:ds)
    cout<<it<<" ";
    cout<<endl;
    
    }  
   return;
    }
ds.push_back(arr[ind]);
sum=sum+arr[ind];
printf(ind+1,ds,arr,sum,k,n);
ds.pop_back();
sum=sum-arr[ind];
printf(ind+1,ds,arr,sum,k,n);
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    cin>>A[i];
    int k;
    cin>>k;
    vector<int>ds;
    printf(0,ds,A,0,k,n);

return 0;
}
