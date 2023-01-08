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
	int n,k; cin>>n>>k;
	map<int,pair<int,int>> mp;
	for(int i=0;i<n;i++){
		int a; cin>>a;
		if(mp.find(a)!=mp.end()){
			pair<int,int> b = mp[a];
			b.first = min(b.first,i);
			b.second = max(b.second,i);
			mp[a]=b; 
		}
		else
			mp[a]={i,i};
	}
	for(int i=0;i<k;i++){
		int a,b; cin>>a>>b;
		if(mp.find(a)==mp.end() || mp.find(b)==mp.end()){
			cout<<"NO"<<endl;
			continue;
		}
		pair<int,int> p = mp[a], pp = mp[b];
		if(p.first<pp.second)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}

signed main(){
	file_i_0();
	int t; 
	t = 1;
	cin>>t;
	while(t--){
		solve();
	}
}