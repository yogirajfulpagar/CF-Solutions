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
	int n, c, q; cin >> n >> c >> q;
    string s; cin >> s;

    vector<ll> left(c+1), right(c+1), diff(c+1);
    left[0] = 0;
    right[0] = n;

    for(int i=1; i<=c; ++i){
    	ll l, r; cin >> l >> r;
    	l--; r--;
    	left[i] = right[i-1];
    	right[i] = left[i] + (r-l+1);
    	diff[i] = left[i] - l;
    }

    while(q--){
    	ll k; cin >> k;
    	k--;
    	for(int i=c; i>=1; --i){
    		if(k < left[i]) continue;
    		else k -= diff[i];
    	}
    	cout << s[k] << "\n";
    }
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