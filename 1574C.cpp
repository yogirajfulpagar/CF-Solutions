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

#define int long long

void solve(){
	int n; cin>>n;
	multiset<ll> s;
	ll strength = 0;
	ll maxx = -1;
	for(int i=0;i<n;i++){
		ll a; cin>>a;
		s.insert(a);
		strength += a;
		maxx = max(maxx,a);
	}
	// cout<<strength<<endl;
	// cout<<maxx<<endl;
	int m; cin>>m;
	for(int i=0;i<m;i++){
		ll a,b; cin>>a>>b; 
		if(s.lower_bound(a)==s.end()){
			ll cost = 0;
			cost += a-maxx;
			if(b - (strength-maxx) > 0)
				cost += b - (strength-maxx);
			cout<<cost<<endl;
		}
		else{
			if(b < strength - *s.lower_bound(a))
				cout<<0<<endl;
			else{
				auto it = s.lower_bound(a);
				// cout<<*it<<endl;
				it--;
				// cout<<*it<<endl;
				ll cost = 0;
				if(a-*it > 0)
					cost += (a-*it);
				// cout<<cost<<endl;
				if(b-(strength-*it) > 0)
					cost += b-(strength-*it);
				cout<<min(cost,b-(strength-*s.lower_bound(a)))<<endl;
			}
		}
	}
	cout<<endl;
}

signed main(){
	file_i_0();
	int t; 
	t = 1;
	// cin>>t;
	while(t--){
		solve();
	}
}