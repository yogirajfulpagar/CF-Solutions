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
	int a,b,c,m; cin>>a>>b>>c>>m;
	int n = a+b+c;
	if(a+b+c-3<m){
		cout<<"NO"<<endl;
		return;
	}
	if(a > b and a > c){
		if(a-b-c-1>m){
			cout<<"NO"<<endl;
			return;
		}
	}
	if(a < b and b > c){
		if(b-a-c-1>m){
			cout<<"NO"<<endl;
			return;
		}
	}
	if(a < c and b < c){
		if(c-b-a-1>m){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
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