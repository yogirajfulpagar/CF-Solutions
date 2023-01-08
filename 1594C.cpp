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
	char c;
	cin>>c;
	string s;
	cin>>s;
	vector<int>ans;
	bool ok = true;
	for(auto x:s){
		if(x != c){
			ok = false;
		}
	}
	if(!ok){
		for(int i=1;i<n+1;i++){
			ok = true;
			for(int j=i;j<n+1;j++){
				ok &= (s[j-1] == c);
				j += i-1;
			}
			if(ok){
				ans.pb(i);
				break;
			}
		}
		if(!ok){
			ans.pb(n);
			ans.pb(n-1);
		}
	}
	cout<<ans.size()<<"\n";
	for(auto x:ans){
		cout<<x<<" ";
	}
	cout<<"\n";
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