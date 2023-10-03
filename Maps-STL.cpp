#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, int>mp;
    int q; cin>>q;

    while(q--)
    {
       int type;
       cin>>type;
       if(type==1){
            string who; int marks;
       cin>>who>>marks;
        mp[who]+=marks;
       }
       else if(type==2){
            string who; cin>>who;
       mp[who]=0;
//            auto it=mp.find(who);
//       if(it!=mp.end())
//        mp.erase(who);
       }
     else
     {
       string who;   cin>>who;
       cout<<mp[who]<<endl;
     }
    }
    return 0;
}
