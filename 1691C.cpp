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
	int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ones = 0, p1_first = n, p1_last = -1;
    for (int p = 0; p < n; p++) {
      if (s[p] != '1')
        continue;
      ones += 1;
      if (p1_first == n)
        p1_first = p;
      p1_last = p;
    }
    int add = 0;
    // moving the last one to last position
    if (ones > 0 and (n - 1 - p1_last) <= k) {
      k -= (n - 1 - p1_last);
      add += 1;
      ones -= 1;
    }
    // moving the first one to first position
    if (ones > 0 and p1_first <= k) {
      k -= (p1_first);
      add += 10;
      ones -= 1;
    }
    cout << 11 * ones + add << "\n";
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