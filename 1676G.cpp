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

const int X=2*1e5+1;
vi gh[X];
ll int vis[X];

vi cnt;
vi white,black;
void dfs(ll int root,ll int &cnt){
    vis[root]=1;
    for(auto &it:gh[root]){
        if(!vis[it])dfs(it,cnt);
        white[root-1]+=white[it-1];
        black[root-1]+=black[it-1];
    }
}

void solve(){
    ll int n;
    cin>>n;
    vi arr(n);
    string str;
    for(int i=1;i<n;i++)
    	cin>>arr[i];
    cin>>str;
    ll int temp=0;
    black.resize(n);
    white.resize(n);
    for(int i=0;i<n;i++){
        white[i]=0;
        black[i]=0;
    }
    for(int i=0;i<=n;i++){
        gh[i].clear();
        vis[i]=0;
    }
    for(int i=1;i<n;i++){
        gh[arr[i]].push_back(i+1);
    }
    for(int i=0;i<n;i++){
        if(str[i]=='W')white[i]=1;
        if(str[i]=='B')black[i]=1;
    }
    dfs(1,temp);
    ll int ans=0;
    for(int i=0;i<n;i++){
        if(black[i]==white[i]){
            ans++;
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