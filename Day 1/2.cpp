
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,f=0;
    cin>>n;
    vector<int> nums={1,2,2,3,3,3,4,5,3,5,3};
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=n)
            f++;
        else
            nums[i]=INT_MAX;
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<f;i++)
        cout<<nums[i];
}
