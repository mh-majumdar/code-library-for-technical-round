#include<bits/stdc++.h>
using namespace std;

#define   Shunno                 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define   ll                     long long int
#define   tastcase(t)            int t;cin>>t;while(t--)
#define   yes                    cout<<"YES"<<endl
#define   no                     cout<<"NO"<<endl



void solution()
{
    ///cout<<"Case "<<++caseno<<": ";
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
    	cin>>a[i];
    }
    ll x;cin>>x;
    ll l=0,h=n-1;
    while(h-l>1){
    	ll m=(l+h)/2;
       if(x>a[m]){
       	l=m+1;
       }
       else{
        h=m;
       }
    }
    if(x==a[l]) cout<<l+1<<endl;
    else if(x==a[h]) cout<<h+1<<endl;
    else cout<<"Not Found"<<endl;

}

int main()
{
    Shunno;
    //tastcase(t)
    solution();
    return 0;
}
