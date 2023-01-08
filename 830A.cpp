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

int gcd(int a, int b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}

void solve(){
	int n; cin>>n;
	vector<int> v(n);
	int gdc = 0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		gdc=gcd(gdc,v[i]);
	}
	// cout<<gdc<<endl;
	if(gdc==1){
		cout<<0<<endl;
		return;
	}
	gdc = gcd(gdc,v[n-1]);
	if(gcd(gdc,gcd(v[n-1],n))==1){
		cout<<1<<endl;
		return;
	}
	gdc = gcd(gdc,v[n-1]);
	gdc = gcd(gdc,v[n-2]);
	if(gcd(gdc,gcd(v[n-1],n-1))==1)
		cout<<2<<endl;
	else
		cout<<3<<endl;
}

int main(){
	file_i_0();
	int t; cin>>t;
	while(t--){
		solve();
	}
}