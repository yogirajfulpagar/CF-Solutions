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

vector < int > go = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};
int inf = 1e9 + 7;

int get(int x) {
	string s = to_string(x);
	if ((int)s.size() == 1) s = "0" + s;
	string answ = "";
	for (int i = 1; i >= 0; --i) {
		if (go[s[i] - '0'] == -1) return inf;
		answ += char(go[s[i] - '0'] + '0');
	}
	return stoi(answ);
}

string good(int x) {
	string ans = to_string(x);
	if (x < 10) {
		ans = "0" + ans;
	}
	return ans;
}

void solve(){
	int t, h, m, H, M;
	string s;
	cin >> h >> m;
	cin >> s;
	H = (s[0] - '0') * 10 + s[1] - '0';
	M = (s[3] - '0') * 10 + s[4] - '0';
	while (1) {
		if (M == m) {
			H++, M = 0;
		}
		if (H == h) {
			H = 0;
		}
		if (get(M) < h && get(H) < m) {
			cout << good(H) << ":" << good(M) << '\n';
			break;
		}
		M++;
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