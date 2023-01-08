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
	string s; cin>>s;
	vector<int> v(s.length());
	vector<pair<int,int>> a;
	for(int i=0;i<s.length();i++){
		v[i]=s[i]-'a'+1;
		a.push_back({v[i],i+1});
	}
	if(s[0]>s[s.length()-1])
		sort(a.begin(),a.end(),[](pair<int,int> a, pair<int,int> b){
			if(a.first == b.first)
				return a.second < b.second;
			return a.first > b.first;
		});
	else
		sort(a.begin(),a.end(),[](pair<int,int> a, pair<int,int> b){
			if(a.first==b.first)
				return a.second < b.second;
			return a.first < b.first;
		});
	int i=0;
	while(a[i].first!=v[0])
		i++; 
	int cost = 0,prev=a[i].first;
	vector<int> ans;
	while(a[i].first!=v[s.length()-1]){
		cost+=abs(a[i].first-prev);
		prev = a[i].first;
		ans.push_back(a[i].second);
		i++;
	}
	while(i<a.size() and a[i].first==v[s.length()-1]){ 
		cost+=abs(a[i].first-prev);
		prev = a[i].first;
		ans.push_back(a[i].second);
		i++;
	}
	// cost+=abs(a[i].first-prev);
	// ans.push_back(a[i].second);
	cout<<cost<<" "<<ans.size()<<endl;
	for(auto it : ans)
		cout<<it<<" ";
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