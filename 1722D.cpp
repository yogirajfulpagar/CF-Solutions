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
	int n; cin>>n;
	string s; cin>>s;
	ll ans = 0;
	priority_queue<int> pq;
	for(int i=0;i<n;i++){
		int curr = 0;
		if(s[i]=='L')
			ans += i, curr = i;
		else
			ans += n-i-1, curr = n-i-1; 
		if(curr < n-i-1)
			pq.push(n-i-1-curr);
		if(curr < i)
			pq.push(i-curr);
		// cout<<curr<<" = curr, "<<n-i-1<<", i - "<<i<<endl;
	}
	// for(int i=0;i<n;i++){
	// 	if(pq.size())
	// 		ans += pq.top(),pq.pop();
	// 	cout<<ans<<" ";
	// }
	int i=0;
	while(pq.size()){
		int num = pq.top();
		pq.pop();
		ans += num;
		cout<<ans<<" ";
		i++;
	}
	while(i<n)
		cout<<ans<<" ",i++;
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