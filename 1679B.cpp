#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define INF 1e18+9
#define endl '\n'
// using namespace __gnu_pbds;
using namespace std;
#define MOD 1000000007
#define MAX 1000001
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define vii vector<vector<int> >
#define pi pair<int,int>
#define pi pair<int,pair<int,int>>

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void file_i_0(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif       
}

void solve(){
	ll n,q;cin>>n>>q;
    vector<ll> v(n+10);map<ll,ll>mp;
    ll sum=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];sum+=v[i];
        mp[i]=v[i];
    }
    ll pre=0;
    
    while(q--)
    {
        ll t,pos,x;cin>>t;
        if(t==2)
        {            
            cin>>x;pre=x;
            sum=(ll)n*(ll)x;
            mp.clear();
        }
        else
        {
            cin>>pos>>x;
            if(!mp[pos])
            {
                sum+=(ll)((ll)x-(ll)pre);
                v[pos]=x;
                mp[pos]=x;
                
            }
            else
            {
                sum+=(ll)((ll)x-(ll)mp[pos]);
                mp[pos]=x;
            }
 
        }
        cout<<sum<<endl;
    }
}

int main(){
	file_i_0();
	int t; 
	t = 1;
	// cin>>t;
	while(t--){
		solve();
	}
}