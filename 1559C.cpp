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
#define pii pair<int,pair<int,int>>

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

void dfs(int curr, vector<vector<int>> adj, vector<int> &vis, vector<int> &ans){
	if(!vis[curr])
		ans.push_back(curr);
	vis[curr]=1;
	for(auto it : adj[curr]){
		if(!vis[it])
			dfs(it,adj,vis,ans);
	}
}

void solve(){
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(a[0]){
		cout<<n+1<<" ";
		for(int i=0;i<n;i++){
			cout<<i+1<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=0;i<n-1;i++){
		if(!a[i] and a[i+1]){
			for(int j=0;j<=i;j++){
				cout<<j+1<<" ";
			}
			cout<<n+1<<" ";
			for(int j=i+1;j<n;j++)
				cout<<j+1<<" ";
			cout<<endl;
			return;
		}
	}
	for(int i=0;i<n;i++)
		cout<<i+1<<" ";
	cout<<n+1<<endl;
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