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

int len(int x){
	int cnt = 0;
	while(x){
		cnt++;
		x/=10;
	}
	return cnt;
}

void solve(){
	int n; cin>>n;
	vector<int> a(n),b(n);
	multiset<int> s1,s2;
	for(int i=0;i<n;i++){
		cin>>a[i]; 
		s1.insert(a[i]);
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
		s2.insert(b[i]);
	}
	int cnt = 0;
	for(int i=0;i<n;i++){
		if(len(a[i])>1 and s1.find(a[i])!=s1.end() and 
			s2.find(a[i])!=s2.end()){
			s1.erase(s1.find(a[i]));
			s2.erase(s2.find(a[i]));
		}
		else if(len(a[i])>1){
			s1.erase(s1.find(a[i]));
			s1.insert(len(a[i]));
			cnt++;
		}
	}
	a.clear();
	b.clear();
	for(auto it : s1)
		a.push_back(it);
	for(auto it : s2)
		b.push_back(it);
	for(auto it : b){
		if(len(it)>1){
			s2.erase(s2.find(it));
			s2.insert(len(it));
			cnt++;
		}
	}
	a.clear();
	b.clear();
	for(auto it : s1)
		a.push_back(it);
	for(auto it : s2)
		b.push_back(it);
	for(auto it : a){
		if(s1.find(it)!=s1.end() and s2.find(it)!=s2.end()){
			s1.erase(s1.find(it));
			s2.erase(s2.find(it));
		}
		else if(s2.find(1)!=s2.end()){
			cnt++;
			s1.erase(s1.find(it));
			s2.erase(s2.find(1));
		}
	}
	a.clear();
	b.clear();
	for(auto it : s1)
		a.push_back(it);
	for(auto it : s2)
		b.push_back(it);
	for(auto it : b){
		if(s1.find(1)!=s1.end()){
			cnt++;
			s2.erase(s2.find(it));
			s1.erase(s1.find(1));
		}
	}
	cnt += s1.size() + s2.size();
	cout<<cnt<<endl;
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