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

void solve(){
	ll n,m; cin >> n >> m;
	ll n0 = n;
	int cnt2 = 0, cnt5 = 0;
	ll k = 1;
	while (n > 0 && n % 2 == 0) {
		
		n /= 2;
		cnt2++;
	}
	while (n > 0 && n % 5 == 0) {
		n /= 5;
		cnt5++;
	}
	while (cnt2 < cnt5 && k * 2 <= m) {
		cnt2++;
		k *= 2;
	}
	while (cnt5 < cnt2 && k * 5 <= m) {
		cnt5++;
		k *= 5;
	}
	while (k * 10 <= m) {
		k *= 10;
	}
	if (k == 1) {
		cout << n0 * m << endl;
	} else {
        k *= m / k; // 1 <= m/k < 10
        cout << n0 * k << endl;
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