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
	int l,r,x,a,b; cin>>l>>r>>x>>a>>b;
	if(a==b){
		cout<<0<<endl; 
		return;
	}
	if(a > b)
		swap(a,b);
	// cout<<a<<" "<<b<<endl;
	if(b<l || b>r || (a+x>r && a-x<l)  || (r-b<x and b-l<x)){
		cout<<-1<<endl;
		return;
	}
	if(abs(a-b)>=x){
		cout<<1<<endl;
	}
	else if(r-b >= x || a-x>=l){
		cout<<2<<endl;
	}
	else
		cout<<3<<endl;
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