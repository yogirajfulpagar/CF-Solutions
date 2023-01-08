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
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	vector<int> p(n,0),ans;
	int maxx = a[0];
	for(int i=0;i<n;i++){
		maxx = max(maxx,a[i]);
		p[i]=maxx;
	}
	int j = n-1;
	while(j>=0){
		stack<int> st;
		while(j>=1 and p[j]==p[j-1]){
			st.push(a[j]);
			j--;
		}
		st.push(a[j]);
		while(!st.empty()){
			ans.push_back(st.top());
			st.pop();
		}
		j--;
	}
	for(auto it : ans)
		cout<<it<<" ";
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