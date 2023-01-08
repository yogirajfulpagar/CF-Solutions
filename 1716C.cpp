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

ll solve1(vector<vector<int>> v, int m){
	ll time = 0;
	for(int i=1;i<m;i++){
		if(v[0][i]<=time)
			time++;
		else
			time+=v[0][i]-time;
	}
	if(v[1][m-1]<=time)
		time++;
	else
		time += v[1][m-1]-time;
	for(int i=m-2;i>=0;i--){
		if(v[1][i]<=time)
			time++;
		else
			time+=v[1][i]-time;
	}
	return time;
}

ll solve2(vector<vector<int>> v, int m){
	ll time = 0;
	for(int i=0;i<m;i++){
		if(i==0){
			if(v[1][i]<=time)
				time++;
			else
				time+=v[1][i]-time;
			continue;
		}
		if(i%2==0){
			if(v[0][i]<=time)
				time++;
			else
				time+=v[0][i]-time;
			if(v[1][i]<=time)
				time++;
			else
				time+=v[1][i]-time;
		}
		else{
			if(v[1][i]<=time)
				time++;
			else
				time+=v[1][i]-time;
			if(v[0][i]<=time)
				time++;
			else
				time+=v[0][i]-time;
		}
	}
	return time;
}

void solve(){
	int m; cin>>m;
	vector<vector<int>> v(2,vector<int>(m,0));
	for(int i=0;i<2;i++){
		for(int j=0;j<m;j++)
			cin>>v[i][j];
	}
	// for(auto it : v){
	// 	for(auto i : it)
	// 		cout<<i<<" ";
	// 	cout<<endl;
	// }
	ll an1=solve1(v,m);
	ll an2=solve2(v,m);
	cout<<min(an2,an1)<<endl;
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