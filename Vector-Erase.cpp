//index 1 direct
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n; cin>>n;
   vector<int>v(n+1);
   for(int i=1;i<=n;i++)
    cin>>v[i];
   int x; cin>>x;
   int a,b; cin>>a>>b;
   v.erase(v.begin()+(x));
   v.erase(v.begin()+a,v.begin()+b);
   cout<<(int)v.size()-1<<'\n';
   for(int i=1;i<v.size();i++)
    cout<<v[i]<<" ";
   cout<<'\n';
   return 0;
}
/*
/ index 0 base
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n; cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)
    cin>>v[i];
   int x; cin>>x;
   int a,b; cin>>a>>b;
   v.erase(v.begin()+(x-1));
   v.erase(v.begin()+(a-1),v.begin()+(b-1));
   cout<<v.size()<<'\n';
   for(auto y:v)
    cout<<y<<" ";
   cout<<'\n';
   return 0;
}
*/
