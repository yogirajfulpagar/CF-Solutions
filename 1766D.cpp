#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
// #define INF 1e18+9
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

#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
#define sz(a) int((a).size())

const int INF = int(1e9);
const int N = int(1e7) + 5;
int mind[N];

void precalc() {
	fore (i, 0, N)
	mind[i] = i;
	
	for (int p = 2; p < N; p++) {
		if (mind[p] != p)
			continue;
		for (int d = 2 * p; d < N; d += p)
			mind[d] = min(mind[d], p);
	}
}


vector<int> getPrimes(int v) {
	vector<int> ps;
	while (v > 1) {
		if (ps.empty() || ps.back() != mind[v])
			ps.push_back(mind[v]);
		v /= mind[v];
	}
	return ps;
}

void solve(){
	cout << fixed << setprecision(15);
	precalc();
	int n; cin>>n;
	for(int i=0;i<n;i++){
		int x, y; cin>>x>>y;
		int d = y - x;
		if (d == 1) {
			cout << -1 << '\n';
			continue;
		}

		int r = INF;
		for (int p : getPrimes(d))
			r = min(r, ((x + p - 1) / p) * p);
		cout << r - x << '\n';
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