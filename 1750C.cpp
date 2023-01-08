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
	int n;
	string a, b;
	cin >> n >> a >> b;
	a = '$' + a;
	b = '$' + b;
	bool ok = true;
	for (int i = 1; i <= n; ++i)
	{
		if (a[i] != char('1' - b[i] + '0'))
		{
			ok = false;
			break;
		}
	}
	ok = ok || (a == b);
	if (!ok)
	{
		cout << "NO\n";
		return;
	}
	vector<pair<int, int>> ops;
	if (a[1] != b[1])
	{
		ops.push_back({1, n});
		a = b;
	}
	vector<int> cnt(n + 1);
	for (int i = 1; i <= n; ++i)
	{
		if (a[i] == '1')
		{
			if (i == 1)
			{
				ops.push_back({1, n});
				ops.push_back({2, n});
			}
			else
			{
				cnt[i]++;
				cnt[i - 1]++;
			}
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		if (cnt[i] % 2 == 1)
		{
			ops.push_back({1, i});
		}
	}
	cout << "YES\n"
	<< (int)ops.size() << '\n';
	for (auto i : ops)
	{
		cout << i.first << ' ' << i.second << '\n';
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