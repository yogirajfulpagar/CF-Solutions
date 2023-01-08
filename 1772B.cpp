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
	int a,b,c,d; cin>>a>>b>>c>>d;
	vector<int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	v.push_back(d);
	sort(v.begin(),v.end());
	// for(auto it : v)
	// 	cout<<it<<" ";
	// cout<<endl;
	for(int i=0;i<4;i++){
		if((a==v[0] and v[1]==b and v[2]==c and v[3]==d) || 
			(a==v[0] and v[1]==c and v[2]==b and v[3]==d)){
			cout<<"YES\n";
		return;
	}
	int temp = a;
	a = c;
	c = d;
	d = b;
	b = temp;
}
if((a==v[0] and v[1]==b and v[2]==c and v[3]==d) || 
	(a==v[0] and v[1]==c and v[2]==b and v[3]==d)){
	cout<<"YES\n";
return;
}
cout<<"NO\n";
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