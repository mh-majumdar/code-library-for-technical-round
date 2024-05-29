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
    vector<ll>factors;
    for(ll i=2;i<=sqrt(n);i++){
    	while(n%i==0){
    		factors.push_back(i);
    		n/=i;
    	}
    }
    if(n>1) factors.push_back(n);
    for(auto it:factors) cout<<it<<" ";
    	cout<<endl;
}

int main()
{
    Shunno;
    //tastcase(t)
    solution();
    return 0;
}
