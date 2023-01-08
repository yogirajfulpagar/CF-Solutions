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

#define int long long

void solve(){
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	ll max = a[n-1];
	// cout<<max<<endl;
	for(int i=0;i<32;i++){
		// cout<<(max & (1<<i))<<" ";
		for(int j=0;j<n-1;j++){
			// cout<<(a[j]&(1<<i))<<endl;
			if(a[j] & (1<<i)){
				// cout<<"hello";
				// cout<<(max & (1<<i))<<" "<<i<<endl;
				if(!(max & (1<<i))){
					max += (1<<i);
					break;
				}
			}
		}
	}
	// cout<<max<<endl;
	int min = a[0];
	for(int i=0;i<32;i++){
		for(int j=1;j<n;j++){
			if((min & (1<<i)) and !(a[j] & (1<<i))){
				min -= (1<<i);
				break;
			}
		}
	}
	cout<<max-min<<endl;
}

signed main(){
	file_i_0();
	int t; 
	t = 1;
	cin>>t;
	while(t--){
		solve();
	}
}