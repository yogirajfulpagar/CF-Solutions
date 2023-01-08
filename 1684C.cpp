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
	vector<vector<int>> a(n,vector<int>(m,0));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	}
	
	vector<int> bad;
    for (int i = 0; i < n && bad.empty(); i++) {
        vector<int> b = a[i];
        sort(b.begin(), b.end());
        for (int j = 0; j < m; j++) {
            if (a[i][j] != b[j]) bad.push_back(j);
        }
    }
    if ((int)bad.size() == 0) {
    	cout << 1 << " " << 1 << "\n";
    	return;
    }
    if ((int)bad.size() > 2) {
    	cout << -1 << "\n";
    	return;
    }
    for (int i = 0; i < n; i++) {
        swap(a[i][bad[0]], a[i][bad[1]]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (a[i][j] < a[i][j - 1]) {
            	cout << -1 << "\n";
            	return;
           	}
        }
    }
    cout << bad[0] + 1 << " " << bad[1] + 1 << "\n";
    return;
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