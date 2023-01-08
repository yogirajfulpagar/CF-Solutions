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
	int a, b;
	cin >> a >> b;
	string s;
	cin >> s;
	for (int times = 0; times < 2; times++) {
		for (int i = 0; i < (int) s.size(); i++) {
			int j = (int) s.size() - i - 1;
			if (s[i] != '?') {
				if (s[j] == '?') {
					s[j] = s[i];
				} else if (s[i] != s[j]) {
					cout<<-1<<endl;
					return;
				}
			}
		}
		reverse(s.begin(), s.end());
	}
	a -= count(s.begin(), s.end(), '0');
	b -= count(s.begin(), s.end(), '1');
	int ques = count(s.begin(), s.end(), '?');
	bool emptyMid = (s.size() % 2 == 1 && s[s.size() / 2] == '?');
	if (a < 0 || b < 0 || a + b != ques || (emptyMid && a % 2 == 0 && b % 2 == 0)) {
		cout<<-1<<endl;
		return;
	}
	if (a % 2 == 1 || b % 2 == 1) {
		int i = s.size() / 2;
		if (s[i] != '?') {
			cout<<-1<<endl;
			return;
		}
		s[i] = (a % 2 == 1 ? '0' : '1');
		if (a % 2 == 1) {
			a--;
		} else {
			b--;
		}
	}
	if (a % 2 == 1 || b % 2 == 1) {
		cout<<-1<<endl;
		return;
	}
	for (int i = 0; i < (int) s.size(); i++) {
		if (s[i] == '?') {
			int j = s.size() - i - 1;
			if (a > 0) {
				a -= 2;
				s[i] = s[j] = '0';
			} else {
				b -= 2;
				s[i] = s[j] = '1';
			}
		}
	}
	cout << s << endl;
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