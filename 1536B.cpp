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

void fun(vector<char> v, string prefix, int n, int k, string s, bool &f){
	if(k==0){
		size_t found = s.find(prefix);
		if(found==string::npos){
			f = 1;
			cout<<prefix<<endl;
		}
		return;
	}

	for(int i=0;i<n;i++){
		string newPrefix;
		newPrefix = prefix + v[i];
		fun(v,newPrefix,n,k-1,s,f);
		if(f)
			return;
	}
}

void solve(){
	int n; cin>>n;
	string s; cin>>s;
	vector<char> v(26);
	iota(v.begin(),v.end(),'a');
	for(int i=1;i<=1000;i++){
		bool f = 0;
		fun(v,"",26,i,s,f);
		if(f)
			return;
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