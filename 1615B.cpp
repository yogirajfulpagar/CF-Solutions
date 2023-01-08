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

const int c=200005;
int w, db[c][20];

void solve(){
	int l, r;
	cin >> l >> r;
	int maxi=0;
	for (int i=0; i<20; i++) {
		maxi=max(maxi, db[r][i]-db[l-1][i]);
	}
	cout << r-l+1-maxi << "\n";
}

signed main(){
	file_i_0();
	for (int i=1; i<c; i++) {
		for (int j=0; j<20; j++) {
			db[i][j]=db[i-1][j]+(i & (1<<j) ? 1 : 0);
		}
	}
	int t; 
	t = 1;
	cin>>t;
	while(t--){
		solve();
	}
}