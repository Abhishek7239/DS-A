
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int row=3,col=3;
void Richest(int a[row][col])
{
    int cust;
    int sum=0,maximum=INT_MIN;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum+=a[i][j];
            if(sum>maximum)
                maximum=sum;
                cust=i+1;
        }
    }
    cout<<"Richest is "<<cust;
}
int main()
{
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    Richest(a);
}
