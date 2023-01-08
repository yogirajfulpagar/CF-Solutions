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

void solve(){
	int n,m; cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	priority_queue<int,vector<int>,greater<int>> pq;
	ll sum = 0, x = 0;
	for(int i=m;i<n;i++){
		if(a[i]<0)
			pq.push(a[i]);
		sum += a[i];
		while(sum<0){
			ll num = pq.top();
			pq.pop();
			num *= -1;
			sum += 2*num;
			x++;
		}
	}
	if(a[m-1]<=0)
		sum = a[m-1];
	else if(m!=1){
		sum = -1*a[m-1];
		x++;	
	}
	priority_queue<int> p;
	for(int i=m-2;i>=1;i--){
		if(a[i]>0)
			p.push(a[i]);
		sum += a[i];
		while(sum>0){
			ll num = p.top();
			p.pop();
			num *= -1;
			sum += 2*num;
			x++;
		}
	}
	cout<<x<<endl;
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