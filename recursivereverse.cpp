#include <bits/stdc++.h>
using namespace std;
void recurse(int *Arr,int i,int n)
{
    if(i>=n/2)
    return;
    swap(Arr[i],Arr[n-i-1]);
    recurse(Arr,i+1,n);

}

int main()
{
    int a[]={23,34,3,56,7,67};
    int n=6;
    recurse(a,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
return 0;
}
