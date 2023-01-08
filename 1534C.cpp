#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #define ll long long
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
using ll = long long;
const int MN=4e5+1;
const int mod=1e9+7;
bool gone[MN];
vector<int> adj[MN];
int arr[MN][2];

void dfs(int loc){
    gone[loc]=true;
    for(auto x:adj[loc])
    	if(!gone[x])
    		dfs(x);
}

void solve(){
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i][0],adj[i]=vector<int>(),gone[i]=false;
	for (int i = 1; i <= n; i++)
		cin >> arr[i][1];
	for (int i = 1; i <= n; i++) {
	    adj[arr[i][0]].push_back(arr[i][1]), adj[arr[i][1]].push_back(arr[i][0]);
	}
	ll ans = 1;
    for (int i = 1; i <= n; i++) {
        if (!gone[i]) {
            ans = ans * ll(2) % mod;
            dfs(i);
        }
    }
    cout<<ans<<endl;
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