#include<bits/stdc++.h>
using namespace std ;
 
#define ll              long long 
#define pb              push_back
#define all(v)          v.begin(),v.end()
#define sz(a)           (ll)a.size()
#define F               first
#define S               second
#define INF             2000000000000000000
#define pll             pair<ll,ll> 
#define pii             pair<int,int>
#define ld              long double
#define endl            '\n'
ll mod=1e9+7;

 vector<int>ar(100);
vector<vector<int>>ans;
  int n;

void func(int i, vector<int>cur ){
    if(i==n){
        ans.pb(cur);
        return;
    }
    func(i+1,cur);
    cur.pb(ar[i]);
    func(i+1,cur);


}
int main()
{ 
    cin>>n;
   
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    
    vector<int> cur;
    func(0,cur);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
