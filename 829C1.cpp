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
	vector<int> v(n);
	map<int,int> mp;
	for(int i=0;i<n;i++){
		cin>>v[i];
		mp[v[i]]++;
	}
	if(n==1){
		cout<<-1<<endl; 
		return;
	}
	if(mp.size()==1){
		if(mp[-1]%2 || mp[1]%2){
			cout<<-1<<endl;
			return;
		}
		else{
			cout<<1<<endl;
			cout<<1<<" "<<n<<endl;
			return;
		}
	}
	int i=0;
	int sum = 0;
	vector<pair<int,int>> a;
	while(i<n){
		if(sum+v[i]==0){
			sum += v[i];
			a.push_back({i+1,i+1});
			i++;
		}
		else if(i+1<n and v[i]==v[i+1]){
			a.push_back({i+1,i+2});
			i+=2;
		}
		else{
			sum += v[i];
			a.push_back({i+1,i+1});
			i++;
		}
	}
	if(sum==0){
		cout<<a.size()<<endl;
		for(auto it : a)
			cout<<it.first<<" "<<it.second<<endl;
	}
	else
		cout<<-1<<endl;
}

int main(){
	file_i_0();
	int t; cin>>t;
	while(t--){
		solve();
	}
}