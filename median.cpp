#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        v.push_back(b[i]);
    }
    sort(v.begin(),v.end());
    // for(auto value:v)
    // {
    //     cout<<value<<" ";
    // }
    // cout<<endl;
    cout<<(v[n]+v[n-1])/2<<endl;
    return 0;
}