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

#define int long long

int fun(vector<int> a, vector<int> v, int n, int h){
	int i = 0;
	int j = 0;
	while(i<n){
		if(h > a[i]){
			h += a[i]/2;
			i++;
		}
		else if(j<3){
			h *= v[j];
			j++;
		}
		else
			break;
	}
	return i;
}

void solve(){
	int n,h; cin>>n>>h;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	vector<int> v = {2,2,3};
	int one = fun(a,v,n,h);
	swap(v[1],v[2]);
	int two = fun(a,v,n,h);
	swap(v[0],v[1]);
	int three = fun(a,v,n,h);
	cout<<max({one,two,three})<<endl;
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