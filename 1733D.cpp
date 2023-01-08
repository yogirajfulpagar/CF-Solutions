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
	ll n,x,y,d;
	string a,b;
	cin >> n >> x >> y >> a >> b;
	d = 0;
	for(int i = 0; i < n; i++)
	{
		a[i] ^= b[i];
		d += a[i];
	}
	if(d % 2)
	{
		cout << -1 << endl;
		return;
	}
	if(d == 2)
	{
		int l, r;
		for(l = 0; !a[l]; ){
			l++;
			for(r = n - 1; !a[r]; ){
				r--;
				if(l + 1 == r)
					cout << min(x, 2 * y) << endl;
				else 
					cout << min((r - l) * x, y) << endl;
			}
		}
	}
	else 
		cout << d / 2 * y << endl;
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