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

struct Node{
	Node* left, *right;
	int data;

	Node(int val){
		left=NULL;
		right=NULL;
		data = val;
	}
};

Node *create(vector<int> a, int low, int high){
	if(low>high)
		return NULL;

	int maxe = -1, ind = -1;
	for(int i=low;i<=high;i++){
		if(maxe < a[i]){
			maxe=a[i];
			ind = i;
		}
	}

	Node *root = new Node(maxe);
	root->left = create(a,low,ind-1);
	root->right = create(a,ind+1,high);

	return root;
}

int dis(Node* root, int a){
	if(root==NULL)
		return INT_MAX-10;

	if(root->data==a){
		return 0;
	}
	
	return 1 + min(dis(root->left,a),dis(root->right,a));
}

void dfs(Node* root){
	if(!root)
		return;

	cout<<root->data<<" ";
	dfs(root->left);
	dfs(root->right);
}

void solve(){
	int n; cin>>n;
	vector<int> a(n); 
	for(int i=0;i<n;i++)
		cin>>a[i];
	Node* root = create(a,0,n-1);
	// dfs(root);
	for(int i=0;i<n;i++){
		cout<<dis(root,a[i])<<" ";
	}
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