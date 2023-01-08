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
	int k,n; cin>>k>>n;
	int i = 1;
	int diff = 1;
	if(k==n){
		for(int i=1;i<n+1;i++) 	
			cout<<i<<" ";
		cout<<endl;
		return;
	}
	if(k+2==n and n>3 and k>=3){
		cout<<1<<" "<<2<<" "<<4<<" ";
		k-=3;
		for(int i=5;i<=n,k;i++,k--)
			cout<<i<<" ";
		cout<<endl;
		return;
	}
	while(k--){
		cout<<i<<" ";
		if(i+diff<=n and n-i-diff>=k){
			i+=diff;
			diff++;
		}
		else
			i++;
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