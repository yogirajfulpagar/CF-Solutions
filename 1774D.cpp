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
	vector<vector<int>> v(n,vector<int>(m,0));
	vector<int> sum(n,0);
	int cnt = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>v[i][j];
			sum[i]+=v[i][j];
		}
	}
	int tot = 0;
	for(int i=0;i<n;i++)
		tot += sum[i];	
	if(tot%n){
		cout<<-1<<endl; 
		return;
	}
	tot/=n;
	vector<tuple<int,int,int>> ans;
	vector<int> vg,vl;
	vg.reserve(n),vl.reserve(n);	
	for(int j=0;j<m;j++){
		for(int i=0;i<n;i++){
			if(sum[i] > tot && v[i][j])
				vg.push_back(i);
			if(sum[i]<tot && !v[i][j])
				vl.push_back(i);
		}

		for(int i=0;i<min(vl.size(),vg.size());i++){
			++sum[vl[i]]; --sum[vg[i]];
			ans.emplace_back(vl[i],vg[i],j);
		}
		vl.clear(); vg.clear();
	}
	cout<<ans.size()<<endl;
	for(auto [i, j, k] : ans)
			cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
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