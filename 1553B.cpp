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

#define all(x) x.begin(), x.end()

void solve(){
	string s,t;
	cin >> s >> t;
	for (int i = max(0, (int) t.size() - (int) s.size()); i < min(t.size(), s.size()); i++) {
		bool ch = true;
		for (int j = 0; ch && j <= min(i, (int) t.size() - i - 1); j++)
			ch = (t[i - j] == t[i + j]);
		if (ch) {
			string x;
			if (i + 1 > t.size() - i - 1) x = t.substr(0, i + 1);
			else {
				x = t.substr(i, t.size() - i);
				reverse(all(x));
			}
			for (int k = 0; k <= (int) s.size() - (int) x.size(); k++) {
				if (s.substr(k, x.size()) == x) {
					cout << "YES\n";
					return;
				}
			}
		}
	}
	cout << "NO\n";

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