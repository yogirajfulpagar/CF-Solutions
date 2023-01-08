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
	int n,m;cin>>n>>m;
    int vec[n][m];
    int vis[n][m],b[n][m];
    vector<pair<int,pair<int,int>>> v;
    for(int i=0;i<n;i++){
        vector<int> vect;
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
            v.push_back({vec[i][j],{i,j}});
            vis[i][j]=0;
            b[i][j]=0;
        }
    }
    sort(v.begin(),v.end());
    int ct=0;
    for(int i=0;i<m;i++){
        int w =v[i].second.first;
        int w1 =v[i].second.second;
        vis[w][w1]=1;
        b[w][ct]=v[i].first;
        ct++;
    }
    for(int i=0;i<n;i++){
        int p1 = 0;
        for(int j=0;j<m;j++){
            if(b[i][j]==0){
                while(vis[i][p1]==1){
                    p1++;
                }
                vis[i][p1]=1;
                b[i][j]=vec[i][p1];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<'\n';
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