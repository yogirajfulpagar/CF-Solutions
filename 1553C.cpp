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
	string s;
	cin >> s;
	int ans = 9;

	int cnt0 = 0, cnt1 = 0;
	for (int i = 0; i < 10; ++i) {
		if (i % 2 == 0) cnt0 += s[i] != '0';
		else cnt1 += s[i] == '1'; 
		if (cnt0 > cnt1 + (10 - i) / 2) ans = min(ans, i);
		if (cnt1 > cnt0 + (9 - i) / 2) ans = min(ans, i);
	}

	cnt0 = 0, cnt1 = 0;
	for (int i = 0; i < 10; ++i) {
		if (i % 2 == 0) cnt0 += s[i] == '1';
		else cnt1 += s[i] != '0'; 
		if (cnt0 > cnt1 + (10 - i) / 2) ans = min(ans, i);
		if (cnt1 > cnt0 + (9 - i) / 2) ans = min(ans, i);
	}

	cout << ans + 1 << '\n';
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