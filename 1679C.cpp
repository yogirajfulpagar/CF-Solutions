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
	    int n,q;
    cin >>n >>q;
    vector<int> row(n+1,0);
    vector<int> col(n+1,0);
    set<int> s1,s2;
    for(int i=1;i<=n;i++) s1.insert(i),s2.insert(i);
    while(q--)
    {
        int t,x,y;
        cin >> t >> x >> y;
        if(t==1){
            row[x]++,col[y]++;
            if(row[x]==1) s1.erase(x);
            if(col[y]==1) s2.erase(y);
        }
        else if(t==2){
            row[x]--,col[y]--;
            if(!row[x]) s1.insert(x);
            if(!col[y]) s2.insert(y);
        }
        else{
            int x2,y2;
            cin >> x2 >> y2;
            bool ans1 =0;
            auto it = s1.lower_bound(x);
            if(it==s1.end() || *it > x2) ans1=1;
            bool ans2 =0;
            it = s2.lower_bound(y);
            if(it==s2.end() || *it > y2) ans2=1;
            if(!ans1&&!ans2) cout << "NO\n";
            else cout << "YES\n";
        }
    }
}

int main(){
	file_i_0();
	int t; 
	t = 1;
	// cin>>t;
	while(t--){
		solve();
	}
}