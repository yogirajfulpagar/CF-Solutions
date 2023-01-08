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
	int k,n,m; cin>>k>>n>>m;
	vector<int> a(n),b(m);
	for(int i=0;i<n;i++)
		cin>>a[i]; 
	for(int i=0;i<m;i++)
		cin>>b[i];
	int len = k;
	int i=0,j=0; 
	vector<int> ans;
	while(i<n and j<m){
		if(a[i]==0){
			ans.push_back(a[i]);
			len++,i++;
		}
		else if(a[i]<=len){
			ans.push_back(a[i]);
			i++;
		}
		if(b[j]==0){
			ans.push_back(b[j]);
			len++,j++;
		}
		else if(b[j]<=len){
			ans.push_back(b[j]);
			j++;
		}
		if(i==n || j==m)
			break;
		if(a[i]>len and b[j]>len){
			cout<<-1<<endl;
			return;
		}
	}
	while(i<n){
		if(a[i]==0){
			ans.push_back(a[i]);
			len++,i++;
		}
		else if(a[i]<=len){
			ans.push_back(a[i]);
			i++;
		}		
		else{
			cout<<-1<<endl;
			return;
		}
	}
	while(j<m){
		if(b[j]==0){
			ans.push_back(b[j]);
			len++,j++;
		}
		else if(b[j]<=len){
			ans.push_back(b[j]);
			j++;
		}
		else{
			cout<<-1<<endl;
			return;
		}
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