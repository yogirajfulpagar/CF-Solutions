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
	int n,m; cin>>n>>m;
	vector<string> a(n);
	map<string,int> mp;
	for(int i=0;i<n;i++)
		cin>>a[i],mp[a[i]]=i+1;
	sort(a.begin(),a.end(),[](string a, string b){
		for(int i=0;i<a.length();i++){
			if(a[i]==b[i])
				continue;
			if((i+1)%2){
				return a[i]<b[i];
			}
			else
				return a[i]>b[i];
		}
		return true;
	});
	for(auto it : a){
		cout<<mp[it]<<" ";
	}
	cout<<endl;
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