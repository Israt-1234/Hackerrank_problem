#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q; cin>>q;
       set<int>v;
    while(q--){
        int y,x;
        cin>>y>>x;
        if(y==1){
            v.insert(x);
        }
       else if(y==2){
            set<int>::iterator it= v.find(x);
            if(it!=v.end())
                v.erase(x);
        }
       else
       {
       auto it =v.find(x);
       if(it!=v.end()){
        cout<<"YES"<<'\n';

          }
       else
            cout<<"NO"<<'\n';
       }
    }
    return 0;
}
