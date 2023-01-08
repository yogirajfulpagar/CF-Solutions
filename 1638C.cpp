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
	int n; cin>>n; 
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i]; 
	stack<pair<int,int>> st;
	st.push({v[0],v[0]});
	for(int i=1;i<n;i++){
		st.push({v[i],v[i]});
		while(st.size()>=2){
			pair<int,int> x1 = st.top();
			st.pop();
			pair<int,int> x2 = st.top();
			st.pop();
			if(x2.first > x1.second){
				st.push({max(x1.first,x2.first),min(x1.second,x2.second)});
			}
			else{
				st.push(x2);
				st.push(x1);
				break;
			}
		}
	}
	cout<<st.size()<<endl;
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