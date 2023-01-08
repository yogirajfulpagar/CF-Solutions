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

int fun(vector<ll> a, int n, ll sum){
	int ind = -1;
	for(int i=0;i<n+1;i++){
		if(sum-a[i]==a[n+1]){
			ind = i;
			break;
		}
	}
	return ind;
}

void solve(){
	int n; cin>>n;
	vector<ll> a(n+2,0);
	for(int i=0;i<n+2;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	ll sum = 0;
	for(int i=0;i<n+1;i++)
		sum += a[i];
	int ind1 = fun(a,n,sum);
	sum -= a[n];
	sum += a[n+1];
	swap(a[n],a[n+1]);
	int ind2 = fun(a,n,sum);
	if(ind2==-1 and ind1==-1)
		cout<<-1<<endl;
	else{
		if(ind1!=-1){
			for(int i=0;i<n;i++){
				if(ind1==i)
					continue;
				cout<<a[i]<<" ";
			}
			if(ind1!=n)
				cout<<a[n+1]<<" ";
			cout<<endl;
		}
		else{
			for(int i=0;i<n;i++){
				if(ind2==i)
					continue;
				cout<<a[i]<<" ";
			}
			if(ind2!=n)
				cout<<a[n]<<" ";
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