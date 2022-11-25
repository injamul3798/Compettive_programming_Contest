#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


ll fact(int num){
	if(num==0) return 1;
	return num*fact(num-1);
}   



int main() {
	// your code goes here
	int t;       cin>>t;
	while(t--){
	    int n;       cin>>n;
	    vector<int> v;
	    map<ll,ll> mp;
	    for(int i=0;i<n;i++){
	        int x;     cin>>x;
	        v.push_back(x); 
	        mp[v[i]]++;
	    }
	    ll sum=0;
	    /*
	    for(int i=0;i<n;i++){
	    	sum+=fact(v[i]);
	    } */
	    for(auto i:mp){
	    	sum+=(fact(i.first)*i.second)%1000000007;
	    }
	    cout<<sum%1000000007<<endl;
	}
}