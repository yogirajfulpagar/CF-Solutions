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
	int n,m; cin>>n>>m;  
	vector<vector<int>> v(n,vector<int>(m,0)); 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char ch; cin>>ch;
			v[i][j]=ch-'0';
		}
	}
	vector<vector<int>> b(n,vector<int>(m,0)); 
	vector<vector<int>> a; 
	for(int i=n-1;i>=0;i--){
		for(int j=m-1;j>=0;j--){
			vector<int> temp;
			if(v[i][j]==1){
				if(j-1>=0){
					b[i][j]=1;
					temp.push_back(i);
					temp.push_back(j-1);
					temp.push_back(i);
					temp.push_back(j);
				}
				else if(i-1>=0){
					b[i][j]=1;
					temp.push_back(i-1);
					temp.push_back(j);
					temp.push_back(i);
					temp.push_back(j);
				}
			}
			else if(v[i][j]==0 and b[i][j]==1)	{
				b[i][j]=0;
				temp.push_back(i);
				temp.push_back(j);
				temp.push_back(i);
				temp.push_back(j);
			}
			if(temp.size())
				a.push_back(temp);
		}
	}
	bool f = true;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(b[i][j]!=v[i][j])
				f = false;
			// cout<<b[i][j]<<" = b, v = "<<v[i][j]<<endl;
		}
	}
	if(!f)
		cout<<-1<<endl;
	else{
		cout<<a.size()<<endl;
		for(int i=0;i<a.size();i++){
			for(int j=0;j<a[0].size();j++)
				cout<<a[i][j]+1<<" ";
			cout<<endl;
		}
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