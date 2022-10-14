#include <bits/stdc++.h>
using namespace std;
void revarr(int Arr[],int start,int end)
{
    while(start < end) {
  int temp=Arr[start];
        Arr[start]=Arr[end];
        Arr[end]=temp;
        start++;
        end--;
    }
    
}
int main()
{
    int n;
    cin>>n;
    int A[n];
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int a=0;
    int b=n-1;
    revarr(A,a,b);
for(int i=0;i<n;i++)
{
    cout<<A[i]<<endl;
}
return 0;
}