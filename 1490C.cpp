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

vector<ll> v;
set<ll> s;

void solve(){
	ll x; cin>>x;
	for(int i=0;i<v.size();i++){
		if(s.find(x-v[i])!=s.end()){
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
}

int main(){
	ll i = 1;
	while(i*i*i<=1e12){
		v.push_back(i*i*i);
		s.insert(i*i*i);
		i++;
	}
	file_i_0();
	int t; 
	t = 1;
	cin>>t;
	while(t--){
		solve();
	}
}