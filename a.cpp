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

int main(){
	file_i_0();
	int t; cin>>t;
	while(t--){
		vector<vector<char>> v(8,vector<char>(8));
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cin>>v[i][j];
			}
		}
		bool r = 1, b = 1;
		char p1 = 'f', p2 = 'f';
		for(int i=0;i<8;i++){
			r = 1,p1='f';
			for(int j=0;j<8;j++){
				if(p1=='f'){
					p1=v[i][j];
				}
				if(p1!=v[i][j])
					r = 0;
				p1 = v[i][j];
			}
			if(r==1)
				break;
		}
		for(int i=0;i<8;i++){
			b = 1,p2='f';
			for(int j=0;j<8;j++){
				if(p2=='f'){
					p2=v[j][i];
				}
				if(p2!=v[j][i])
					b = 0;
				p2 = v[j][i];
			}
			if(b==1)
				break;
		}
		if(r)
			cout<<"R"<<endl;
		else
			cout<<"B"<<endl;
	}
}