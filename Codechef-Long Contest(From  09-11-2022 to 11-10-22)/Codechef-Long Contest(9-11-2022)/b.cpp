#include <bits/stdc++.h>
#include <iostream>
using namespace std; 

int main() {
	// your code goes here
	int t;      cin>>t;
	while(t--){
	    int n;    cin>>n;
	    int ans[n+1];
	    for(int i=1;i<=n;i++){
	         cin>>ans[i];
	    }
	    vector<int> fans;
	    int val=1;
	    for(int i=1;i<=n;i++){
	        for(int j=i+1;j<n;j++){
	            if(ans[i]>1 && (i+j)==ans[i]){
	                for(int k=1;k<=ans[i];i++){
	                	fans.push_back(val);
	                }
	                break;
	            }
	            if(ans[i]==1){
	                fans.push_back(ans[i]);
	            }
	        }
	    }
	    for(int i=1;i<=fans.size();i++){
	    	cout<<fans[i]<<" ";
	    }
	}
	return 0;
}

