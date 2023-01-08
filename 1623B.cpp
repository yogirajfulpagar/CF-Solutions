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
	vector<pair<int,int>> a(n);
	set<pair<int,int>> s;
	for(int i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
		s.insert({a[i]});
	}
	sort(a.begin(),a.end(),[](pair<int,int> a, pair<int,int> b){
		return (abs(a.first-a.second) > abs(b.first-b.second));
	});
	map<pair<int,int>,int> mp;
	for(int i=0;i<n;i++){
		// cout<<a[i].first<<" "<<a[i].second<<endl;
		pair<int,int> p = a[i];
		if(p.first==p.second){
			mp[p]=p.first;
			s.insert(p);
			continue;
		}
		if(mp.find(p)==mp.end()){
			for(int j=p.first;j<=p.second;j++){
				if(p.first>j-1){
					if(s.find({j+1,p.second})!=s.end()){
						mp[p]=j;
						break;
					}
				}
				else if(p.second<j+1){
					if(s.find({p.first,j-1})!=s.end()){
						mp[p]=j;
						break;
					}
				}
				else{
					if(s.find({p.first,j-1})!=s.end() and 
						s.find({j+1,p.second})!=s.end()){
						mp[p]=j;
						break;
					}
				}
			}
		}
	}
	// cout<<endl;
	for(auto it : mp){
		cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
	}
	cout<<endl;
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