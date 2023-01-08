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
	vector<int> a(n),b(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	vector<pair<int,int>> v,vv;
	for(int i=0;i<n;i++)
		v.push_back({a[i],b[i]});
	for(int i=0;i<n;i++){
		pair<int,int> p = v[i];
		int ind = -1;
		for(int j=i+1;j<n;j++){
			if(p.first > v[j].first){
				p.first = v[j].first;
				p.second = v[j].second;
				ind = j;
			}
			else if(p.first == v[j].first and p.second > v[j].second){
				p.first = v[j].first;
				p.second = v[j].second;
				ind = j;
			}
		}
		if(ind!=-1){
			swap(v[i],v[ind]);
			vv.push_back({i+1,ind+1});
		}
	}
	bool f = true;
	for(int i=1;i<n;++i){
		if(v[i].first < v[i-1].first)
			f = false;
		if(v[i].second < v[i-1].second)
			f = false;
	}
	if(!f)
		cout<<-1<<endl;
	else{
		cout<<vv.size()<<endl;
		for(auto it : vv)
			cout<<it.first<<" "<<it.second<<endl;	
	}
}

int main(){
	file_i_0();
	int t; cin>>t;
	while(t--){
		solve();
	}
}