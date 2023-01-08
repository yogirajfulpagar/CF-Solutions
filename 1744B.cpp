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
	int n,q; cin>>n>>q;
	vector<ll> a(n);
	ll sum = 0;
	int odd = 0, even = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum += a[i];
		if(a[i]%2)
			odd++; 
		else
			even++;
	}
	for(int i=0;i<q;i++){
		int x,y; cin>>x>>y;
		if(x==0){
			if(y%2){
				sum += even*y;
				odd += even;
				even = 0;
			}
			else{
				sum += even*y;
			}
		}
		else{
			if(y%2){
				sum += odd*y;
				even += odd;
				odd = 0;
			}
			else{
				sum += odd*y;
			}
		}
		cout<<sum<<endl;
	}
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