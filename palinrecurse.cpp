#include <bits/stdc++.h>
using namespace std;
bool reverse(string s,int i)
{
int l=s.length();

    if(i>l/2)
    return true;
    if (s[i]!=s[l-i-1])
    return false;
    return reverse(s,i+1);
}

int main()
{
    string s;
    cin>>s;
    bool k;
    k=reverse(s,0);
    if(k)
    cout<<"Palindrome"<<endl;
    else
    cout<<"Not Palindrome"<<endl;
return 0;
}
