#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int a1[n],a2[n];

   for(int i=0;i<n;i++)
    cin>>a1[i];

    int j=n/2,f=0;

    for(int i=0;i<n/2;i++)
    {
        a2[f++]=a1[i];
        a2[f++]=a1[j++];
    }

    for(int i=0;i<n;i++)
        cout<<a2[i];
}
