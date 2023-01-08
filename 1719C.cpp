#include<bits/stdc++.h>
using namespace std;
int a[100010],s[100010];
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,q;
		cin>>n>>q;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=1;i<=n;i++)
			s[i]=max(s[i-1],a[i]);
		while(q--) {
			int num,k;
			cin>>k>>num;
			if(a[k]==n) cout<<max(0,num-k+1+(k!=1))<<endl;
			else {
				if(s[k]!=a[k]||num<k-1) cout<<0<<endl;
				else cout<<min(num+1,int(upper_bound(s+1,s+n+1,a[k])-s-1))-k+(k!=1)<<endl;
			}
		}
	}
}