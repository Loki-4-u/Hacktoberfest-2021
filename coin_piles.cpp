#include<bits/stdc++.h>
#define ll long long
#define m 1000000007
#define e 1000000000
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,a,b,c,d,n,s,ma,mi;
    cin>>t;
    while(t--){
        cin>>a>>b;
        s=a+b;
        ma=max(a,b);
        mi=min(a,b);

        if(s%3==0 && ma/2<=mi)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}



