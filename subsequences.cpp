#include <bits/stdc++.h>
using namespace std;
void printf(int ind,vector<int>&ds,int *arr,int n)\
{
if(ind>=n)
{
    for(auto it:ds)
    cout<<it<<" ";
    cout<<endl;
    return;
}
ds.push_back(arr[ind]);
printf(ind+1,ds,arr,n);
ds.pop_back();
printf(ind+1,ds,arr,n);
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++)
    cin>>A[i];
    vector<int>ds;
    printf(0,ds,A,n);

return 0;
}
