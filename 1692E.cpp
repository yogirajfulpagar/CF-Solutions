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
	int n,s; cin>>n>>s;
	vector<int> v(n);
	vector<pair<int,int>> a;
	int sum = 0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		sum += v[i];
		if(v[i])
			a.push_back({v[i],i});
	}
	if(sum==s){
		cout<<0<<endl;
		return;
	}
	if(sum < s){
		cout<<-1<<endl;
		return;
	}
	int i=0,j=a.size()-1;
	int cost = 0;
	while(i<=j and sum>s){
		int cost1,cost2;
		if(i-1>=0)
			cost1 = a[i].second-a[i-1].second;
		else
			cost1 = a[i].second+1;
		if(j+1<a.size()){
			cost2 = a[j+1].second - a[j].second;
		}
		else{
			cost2 = v.size() - a[j].second;
		}
		if(j-1>=0){
			if(a[j].second - a[j-1].second < cost2)
				cost2 = a[j].second-a[j-1].second;
		}
		else{
			if(a[j].second + 1 < cost2)
				cost2 = a[j].second+1;
		}
		if(i+1<a.size()){
			if(a[i+1].second - a[i].second < cost1)
				cost1 = a[i+1].second - a[i].second;
		}
		else{
			if(v.size()-a[i].second < cost1)
				cost1 = v.size() - a[i].second;
		}

		if(cost1 < cost2){
			i++;
		}
		else{
			j--;
		}
		cost += min(cost1,cost2);
		sum--;
	}
	cout<<cost<<endl;
}

int main(){
	file_i_0();
	int t; cin>>t;
	while(t--){
		solve();
	}
}