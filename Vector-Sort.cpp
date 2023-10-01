#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    int n; cin>>n;
    vector<ll>v(n);
    for(int i=0;i<v.size();i++)
    cin>>v[i];

    sort(v.begin(), v.end());
    for(auto x: v)
        cout<<x<<" ";
    cout<<'\n';
    return 0;
}
