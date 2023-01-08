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
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ans = INF;
	for(int i=0;i<n;i++){
		int j=i-1,k=i+1;
		int tmp = 0;
		vector<int> b(n,0);
		while(j>=0){
			tmp += abs(b[j+1]/a[j]) + 1;
			b[j] = a[j]*(abs(b[j+1]/a[j])+1);
			j--;
		}
		while(k<n){
			tmp += abs(b[k-1]/a[k]) + 1;
			b[k] = a[k]*(abs(b[k-1]/a[k]) + 1);
			k++;
		}
		// for(auto it : b)
		// 	cout<<it<<" ";
		// cout<<endl;
		ans = min(ans,tmp);
	}
	cout<<ans<<endl;
}

signed main(){
	file_i_0();
	int t; 
	t = 1;
	// cin>>t;
	while(t--){
		solve();
	}
}