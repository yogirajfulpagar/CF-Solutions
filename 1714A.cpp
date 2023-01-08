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
	int n,h,m; cin>>n>>h>>m;
	set<pair<int,int>> s;
	for(int i=0;i<n;i++){
		int a,b; cin>>a>>b;
		s.insert({a,b});
	}
	auto it = s.lower_bound({h,m});
	if(it==s.end())
		it = s.begin();
	pair<int,int> p = *it;
	if(p.second >= m)
		p.second -=m;
	else{
		p.second += 60-m;
		p.first--;
	}
	if(p.first >= h)
		p.first -= h;
	else
		p.first += 24-h;
	cout<<p.first<<" "<<p.second<<endl;
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