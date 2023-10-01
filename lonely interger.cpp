#include<bits/stdc++.h>
using namespace std;
void maximizing()
{
    int l,r,m=-1;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        for(int j=l;j<=r;j++){
           m=max(m,i^j) ;
        }
    }
    cout<<m<<endl;
}
int main()
{
maximizing();
}
