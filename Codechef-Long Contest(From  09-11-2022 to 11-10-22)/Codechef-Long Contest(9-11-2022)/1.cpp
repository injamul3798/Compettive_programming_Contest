#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
using namespace std;

int main(){
      int t;        cin>>t;
      while(t--){
      	int n;      cin>>n;
      	string s;   cin>>s;
      	map<char,int> mp;
      	for(int i=0;i<n;i++){
      		mp[s[i]]++;
      	}
      	int ans=0;
      	for(auto i:mp){
      		if(i.second%2!=0){
      			ans++;
      			break;
      		}
      	}
      	if(ans==1){
      		cout<<"NO"<<endl;
      	}
      	else{
      		cout<<"YES"<<endl;
      	}
      }
}
