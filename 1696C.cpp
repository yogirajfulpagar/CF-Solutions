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

#define int long long

void solve(){
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	int sum1 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum1 += a[i];
	}
	int k;
	cin >> k;
	int sum2 = 0;
	vector<int> b(k);
	for (int i = 0; i < k; i++)
	{
		cin >> b[i];
		sum2 += b[i];
	}
	if (sum1 != sum2)
	{
		cout << "NO" << endl;
	}
	else
	{
		vector<pair<int, int>> v1;
		vector<pair<int, int>> v2;
		for (int i = 0; i < n; i++)
		{
			int x = 1;
			if (a[i] % m == 0)
			{
				while (a[i] % m == 0)
				{
					a[i] = a[i] / m;
					x = x * m;
				}
				v1.push_back({a[i], x});
			}
			else
			{
				v1.push_back({a[i], 1});
			}
		}
		for (int i = 0; i < k; i++)
		{
			int x = 1;
			if (b[i] % m == 0)
			{
				while (b[i] % m == 0)
				{
					b[i] = b[i] / m;
					x = x * m;
				}
				v2.push_back({b[i], x});
			}
			else
			{
				v2.push_back({b[i], 1});
			}
		}
            // for (auto u : v1)
            // {
            //     cout << u.first << " " << u.second << endl;
            // }
            // for (auto y : v2)
            // {
            //     cout << y.first << " " << y.second << endl;
            // }
		int i = 0;
		int j = 0;
		bool all = true;
		while (i != v1.size() && j != v2.size())
		{
			if (v1[i].first != v2[j].first)
			{
				cout << "NO" << endl;
				all = false;
				break;
			}
			else if (v1[i].second > v2[j].second)
			{
				v1[i].second -= v2[j].second;
				v2[j].second = 0;
				j++;
			}
			else if (v1[i].second < v2[j].second)
			{
				v2[j].second -= v1[i].second;
				v1[i].second = 0;
				i++;
			}
			else
			{
				v1[i++].second = 0;
				v2[j++].second = 0;
			}
		}
		if (all)
			cout << "YES" << endl;
	}
}

signed main(){
	file_i_0();
	int t; 
	t = 1;
	cin>>t;
	while(t--){
		solve();
	}
}