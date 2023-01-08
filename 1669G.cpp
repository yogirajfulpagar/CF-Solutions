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
	int n,m; cin>>n>>m;
	vector<vector<char>> v(n,vector<char>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>v[i][j];
	}
	for(int j=0;j<m;j++){
		for(int i=n-1;i>=0;i--){
			if(v[i][j]=='*'){
				int k;
				for(k=i+1;k<n;k++){
					if(v[k][j]=='o' || v[k][j]=='*')
						break;
				}
				if(k-1!=i){
					v[k-1][j]='*';
					v[i][j]='.';
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<v[i][j];
		cout<<endl;
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