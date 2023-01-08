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
	ll n,k;
    cin>>n>>k;
    vector<ll> h(n);
    vector<ll> p(n);
 
 
    for(ll i=0;i<n;i++)
    {
        cin>>h[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>p[i];
    }
 
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
 
    for(ll i=0;i<n;i++)
    {
        pq.push({p[i],h[i]});
    }
 
    ll curr=0;
 
    while(!pq.empty() and k>0)
    {
        curr+=k;
        while(!pq.empty() and pq.top().second<=curr)
        {
            pq.pop();
        }
        if(pq.empty())
        break;
 
        ll temp=pq.top().first;
        k=k-temp;
 
    }
 
    if(pq.empty())
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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