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
	ll n;
	cin >> n;
	ll a[2 * n], b[2 * n];
	for (int i = 0; i < 2 * n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	ll x1 = 2 * n, x2 = 2 * n;
	ll l = 2 * n;
	ll cnt1 = 0, cnt2 = 0, flag1 = 0, flag2 = 0;
	if (is_sorted(a, a + l))
	{
		cout << 0 << endl;
	}
	else
	{
		while (x1--)
		{
			for (int i = 0; i < 2 * n; i += 2)
			{
				swap(a[i], a[i + 1]);
			}
			cnt1++;
			if (is_sorted(a, a + l))
			{
				flag1 = 1;
				break;
			}
			for (int i = 0; i < n; i++)
			{
				swap(a[i], a[i + n]);
			}
			cnt1++;
			if (is_sorted(a, a + l))
			{
				flag1 = 1;
				break;
			}
		}
		while (x2--)
		{
			for (int i = 0; i < n; i++)
			{
				swap(b[i], b[i + n]);
			}
			cnt2++;
			if (is_sorted(b, b + l))
			{
				flag2 = 1;
				break;
			}
			for (int i = 0; i < 2 * n; i += 2)
			{
				swap(b[i], b[i + 1]);
			}
			cnt2++;
			if (is_sorted(b, b + l))
			{
				flag2 = 1;
				break;
			}
		}
		if (flag1 || flag2)
		{
			cout << min(cnt1, cnt2) << endl;
		}
		else
		{
			cout << -1 << endl;
		}
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