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

bool check(vector<vector<int>> v, int pow){
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			if(v[i][j] >= pow)
				return false;
			else
				pow++;
		}
	}
	return true;
}

void solve(){
	int n; cin>>n;
	vector<vector<int>> v;
	for(int i=0;i<n;i++){
		int k; cin>>k;
		vector<int> a(k);
		for(int j=0;j<k;j++)
			cin>>a[j]; 
		v.push_back(a);
	}	
	sort(v.begin(),v.end(),[](vector<int> a, vector<int> b){
		int max1 = 0, max2 = 0;
		for(int i=0;i<a.size();i++){
			max1 = max(max1,a[i]-i);
		}
		for(int i=0;i<b.size();i++){
			max2 = max(max2,b[i]-i);
		}
		return max1 < max2;
	});
	// for(auto it : v){
	// 	for(auto i : it)
	// 		cout<<i<<" "; 
	// 	cout<<endl;
	// }
	int low = 0, high = 1e9+7;
	int ans = 0;
	while(low <= high){
		int mid = low + (high-low)/2;
		if(check(v,mid)){
			ans = mid;
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	cout<<ans<<endl;
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