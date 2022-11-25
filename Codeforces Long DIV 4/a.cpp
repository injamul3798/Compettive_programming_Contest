#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long int 
int main(){
	int t;   cin>>t;
	while(t--){
		 vector<int> ans;
		 for(int i=0;i<3;i++){
		 	int x;    cin>>x;
		 	ans.push_back(x);
		 }
		 sort(ans.begin(), ans.end());
		 cout<<ans[1]<<endl;
	}
}