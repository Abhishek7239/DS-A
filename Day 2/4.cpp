#include<bits/stdc++.h>
#include<vector>
using namespace std;
void GoodPair(vector<int>v)
{
    int good=0;
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]==v[j])
                good++;
        }
    }
    cout<<"good pairs"<<good;
}
int main()
{
    vector<int> v={1,2,3,1,1,3};
    findGoodPair(v);
}
