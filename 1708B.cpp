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
	int n,l,r; cin>>n>>l>>r;
	if(n==1){
		cout<<"YES"<<endl;
		cout<<l<<endl;
		return;
	}
	vector<int> a;
	bool f = false;
	for(int i=1;i<=n;i++){
		int num1 = l/i, num2 = r/i;
		if(num1*i <=r and num1*i>=l){
			a.push_back(num1*i);
		}
		else if(num2*i <=r and num2*i>=l)
			a.push_back(num2*i);
		else if((num1+1)*i <= r)
			a.push_back((num1+1)*i);
		else if((num2-1)*i >= l)
			a.push_back((num2-1)*i);
		else
			f = true;
	}
	if(f)
		cout<<"NO"<<endl;
	else{
		cout<<"YES"<<endl;
		for(auto it : a)
			cout<<it<<" ";
		cout<<endl;
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