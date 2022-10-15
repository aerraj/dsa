#include <bits/stdc++.h>
using namespace std;
void f(int *arr,int l,int r)
{
if(l>=r)
return;
swap(arr[l],arr[r]);
f(arr,l+1,r-1);
}
int main()
{
    int A[]={1,2,3,4,5};
    f(A,0,4);
    for(int i=0;i<5;i++)
    cout<<A[i]<<" ";
    
return 0;
}