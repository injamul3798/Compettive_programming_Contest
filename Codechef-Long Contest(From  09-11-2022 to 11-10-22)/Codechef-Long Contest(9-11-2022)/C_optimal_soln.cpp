#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define mod 1000000007
ll fact[1000001];
int main() {

	 
	fact[0]=0;
	fact[1]=1;

	
    // store all the factorial into
    // fact array to reduce complexity
	for(ll i=2;i<=1000000;i++){
		fact[i]=((i*fact[i-1])%mod)%mod;
	}

	//doing main function
	int t;       cin>>t;
	while(t--){
	    int n;       cin>>n;
	    
	    map<ll,ll> mp;
	    for(int i=0;i<n;i++){
	        int x;     cin>>x;
	        mp[x]++;
	    }
	    ll sum=0;
	    for(auto i:mp){
	    	sum=(sum+(fact[i.first]*i.second)%mod)%mod;
	    }
	    cout<<sum<<endl;
	}
}