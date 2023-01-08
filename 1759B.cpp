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
	int m,s; cin>>m>>s;
	vector<int> a(m);
	int minn = -1;
	for(int i=0;i<m;i++){
		cin>>a[i];
		minn = max(minn,a[i]);
	}
	// cout<<minn<<endl;
	set<int> ss;
	for(int i=1;i<=minn;i++)
		ss.insert(i);
	for(int i=0;i<m;i++)
		ss.erase(a[i]);
	int sum = 0;
	for(auto it : ss)
		sum += it;
	// cout<<sum<<endl; 
	int i = minn+1;
	// cout<<i<<" "<<endl;
	while(sum < s){
		sum += i;
		i++;
	}
	if(sum==s)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
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