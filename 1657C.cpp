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

bool isPalindrome(string s){
	int i=0,j=s.length()-1;
	while(i<=j){
		if(s[i]!=s[j])
			return false;
		i++;j--;
	}	
	return true;
}

void solve(){
	int n;
	string s;
	cin >> n >> s;
	int l = 0;
	int cnt = 0;
	while (l + 1 < n) {
		if (s[l] == '(' || (s[l] == ')' && s[l + 1] == ')')) {
			l += 2;
		} else {
			int r = l + 1;
			while (r < n && s[r] != ')') {
				++r;
			}
			if (r == n) {
				break;
			}
			l = r + 1;
		}
		++cnt;
	}
	cout << cnt << ' ' << n - l << '\n';
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