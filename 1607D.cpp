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
	int n; cin>>n;
	vector<pair<int,char>> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i].first;
	for(int i=0;i<n;i++)
		cin>>a[i].second;
	sort(a.begin(),a.end(),[](pair<int,char> a, pair<int,char> b){
		if(a.second==b.second)
			return a.first < b.first;
		return a.second < b.second;
	});
	bool f = 1;
	for(int i=0;i<n;i++){
		if(a[i].first==i+1)
			continue;
		else if(a[i].first < i+1){
			if(a[i].second == 'B')
				f = 0;
		}
		else{
			if(a[i].second=='R')
				f = 0;
		}
	}
	if(f)
		cout<<"YES\n"; 
	else
		cout<<"NO\n";
}

int main(){
	file_i_0();
	int t; 
	t = 1;
	cin>>t;
	while(t--){
		solve();
	}
}