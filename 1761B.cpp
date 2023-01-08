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
	if(n==1){
		cout<<1<<endl;
		return;
	}
	vector<int> v;
	for(int i=0;i<n;i++){
		v.push_back(a[i]);
		while(i+1<n and a[i]==a[i+1])
			i++;
	}
	// for(auto it : v)
	// 	cout<<it<<" ";
	// cout<<endl;
	n = v.size();
	map<int,int> mp;
	for(int i=0;i<n;i++)
		mp[v[i]]++;
	if(mp.size()==2 and mp[v[0]]!=1){
		if(mp[v[0]]-1==mp[v[1]])
			cout<<mp[v[0]]<<endl; 
		else
			cout<<mp[v[0]]+1<<endl;
	}
	else
		cout<<n<<endl;
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