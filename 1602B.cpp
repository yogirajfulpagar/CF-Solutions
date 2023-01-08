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
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	ll v[n+1][n];
	for(ll i=0;i<n;i++)
	{
		v[0][i]=arr[i];
	}
	for(ll i=1;i<=n;i++)
	{   
		map<ll,ll>m;
		for(ll j =0;j<n;j++)
			m[arr[j]]++;
		for(ll j=0;j<n;j++)
		{
			arr[j]=m[arr[j]];
			v[i][j]=arr[j];
		}
	}
	ll q;
	cin>>q;
	for(ll i=0;i<q;i++)
	{
		ll x,k;
		cin>>x>>k;
		if(k<=n)
			cout<<v[k][x-1]<<endl;
		else
			cout<<v[n][x-1]<<endl;
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