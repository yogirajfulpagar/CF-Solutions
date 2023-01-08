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

#define int long long

void solve(){
	int n;
	cin>>n;
	int a[n];
	int e = 0, o = 0;
	set<int> s;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s.insert(a[i]);
		if(a[i]%2) o++;
		else e++;
	}
	if(s.size()!=n){
		cout<<"NO\n";
		return;
	}
	int check = 1;
	for(int i=2;i<=n;i++){
		int chk = 0;
		vector<int> rem(i, 0);
		for(int j=0;j<n;j++){
			rem[a[j]%i]++;
		}
		for(int j=0;j<i;j++) 
			if(rem[j]<2) 
				chk = 1;
		if(chk==0) check = 0;
	}

	check ? cout<<"YES\n": cout<<"NO\n";
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