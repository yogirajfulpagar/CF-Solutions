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
const int N = 1e5+1;
int parent[N];
int sizee[N];

void dsu(int n){
	for(int i=1;i<=n;i++){
		parent[i] = i;
		sizee[i] = 1;
	}
}

int find(int i){
	if(i==parent[i]) 
		return i;

	return parent[i] = find(parent[i]);
}

void merge(int a, int b){
	a = find(a); b = find(b);
	if (a != b) {
		if (sizee[a] < sizee[b])
			swap(a, b);
		parent[b] = a;
		sizee[a] += sizee[b];
	}
}

int binexp(int a, int b, int m)
{
    if(a==0) return 0;
 
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * 1ll * a) % m;
        }
        a = (a * 1ll * a) % m;
        b = b >> 1;
    }
 
    return res;
}


void solve(){
	int n; cin>>n;
    dsu(n);
    vector<int> a(n+1), b(n+1), c(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    for(int i=1;i<=n;i++) cin>>c[i];
 
    for(int i=1;i<=n;i++){
        merge(a[i],b[i]);
 
        //if both same then no. will be c[i]
        if(a[i]==b[i]) c[i] = b[i];
    }
    set<int> s;
    for(int i=1;i<=n;i++){
        //insert all disjoint sets :
        s.insert(find(i));
    }
 
    //erase the already taken component :
    for(int i=1;i<=n;i++){
        if(c[i]){
            s.erase(find(c[i]));
        }
    }
 
    //ans = 2 power (no. of non-connected components)
    cout<<binexp(2,s.size(),MOD)<<"\n";
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