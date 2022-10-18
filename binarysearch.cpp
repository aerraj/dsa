#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    int m;
    cin>>m;
    sort(a,a+n);
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int f=0;
    while(start<=end)
    {
        if(a[mid]==m)
        {
            f=1;
        }
        if(a[mid]<m)
        {
            start=+1;
            mid=(start+end)/2;
        }
        if(a[mid]>m)
        {
            end=mid-1;
            mid=(start+end)/2;
        }
    }
    if(f==1)
        cout<<"found at index"<<mid+1;
        else
        cout<<"Not found"<<endl;
return 0;
}
