#include "bits/stdc++.h"
#include <algorithm>
using namespace std;

#define ll long long
 
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (int)a.size()
int cop[1001];
void solve(){
	int n,x;     cin>>n;
	vector<int> cop(1001,-1); // default value -1
	forn(i,n){
		int x;    cin>>x;
		cop[x]=i;  // store latest index
		// suppose we have array of 1 2 3,3,5,1
		// here for one it will store 6 as index of 1
		// 1 5 3 1
		// 4 -1 3 -1 2   4 index of 1

	}

	int ans=-1;
	for(int i=1;i<1001;i++){
		if(cop[i]!=-1){
			for(int j=1;j<1001;j++){
				if(cop[j]!=-1 && __gcd(cop[i],cop[j])==1){
					ans = max(ans,cop[i]+cop[j]);
				}
			}
		}
	}
	cout<<ans<<endl;

}
int main(){
	int t;    cin>>t;
	while(t--){
       solve();
	}
}