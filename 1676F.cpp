#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #define ll long long
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
	int n, k;
	cin >> n >> k;
	int a[n];
	map<int, int> mp;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	vector<int> c;
	for(auto x : mp)
	{
		if(x.second >= k)
		{
			c.push_back(x.first);
		}
	}
	if(c.size() == 0)
	{
		cout << -1 << endl;
		return;
	}
	sort(c.begin(), c.end());
	int mx = 0;
	int lans = c[0], rans = c[0];
	int l = c[0];
	for(int i = 1; i < c.size(); i++)
	{
		if(c[i]-1 == c[i-1])
		{
			if(c[i]-l > mx)
			{
				lans = l;
				rans = c[i];
				mx = c[i]-l;
			}
		}
		else
		{
			l = c[i];
		}
	}
	cout << lans << " " << rans << endl;
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