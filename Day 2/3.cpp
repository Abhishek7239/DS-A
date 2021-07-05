#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void findHighest(vector<int>v,int e)
{
    int extra=0;
    int maximum=INT_MIN;
    for(auto&e: v)
        maximum=*max_element(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        extra=v[i]+e;
        if(extra>=maximum)
        {
            cout<<"true ";
            extra=0;
        }
        else
        {
            cout<<"false ";
            extra=0;
        }
    }
}
int main()
{
    int ex;
    cin>>ex;
    vector<int>v={4,2,1,1,2};
    findHighest(v,ex);
}
