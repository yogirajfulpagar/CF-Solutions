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
	int n; cin>>n; 
	vector<int> a(n); 
	for(int i=0;i<n;i++)
		cin>>a[i]; 
	multiset<int,greater<int>> odd,even; 
	if(a[n-1]%2)
		odd.insert(a[n-1]); 
	else
		even.insert(a[n-1]);
	bool f = true;
	for(int i=n-2;i>=0;i--){
		if(a[i]%2 and odd.upper_bound(a[i])!=odd.end())
			f = false;
		if(a[i]%2==0 and even.upper_bound(a[i])!=even.end())
			f = false;
		if(a[i]%2)
			odd.insert(a[i]); 
		else
			even.insert(a[i]);
	}
	if(f)
		cout<<"YES\n"; 
	else
		cout<<"NO\n";
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