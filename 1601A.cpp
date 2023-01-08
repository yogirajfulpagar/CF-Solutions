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

int gcd(int a, int b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}

void solve(){
	int n; cin>>n;
	vector<int> a(n);
	int zero = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==0)
			zero++;
	}
	if(zero==n){
		for (int i = 0; i < n; ++i)
		{
			cout<<i+1<<" ";
		}
		cout<<endl;
		return;
	}
	set<int> divisors;
	vector<int> v;
	for(int x=0;x<30;x++){
		int cnt = 0;
		for(int j=0;j<n;j++){
			if(a[j] & (1<<x))
				cnt++;
		}
		v.push_back(cnt);
	}
	int g = v[0];
	for(int k=1;k<v.size();k++)
		g = gcd(g,v[k]);

	for (int i = 1; i * i <= g; i++) {
		if (g % i == 0) {
			divisors.insert(i);
			if (g / i != i)
				divisors.insert(g / i);
		}
	}

	for (auto& it : divisors)
		cout << it << " ";
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