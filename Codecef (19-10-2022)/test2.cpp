#include<bits/stdc++.h>
 
// author
// Injamul
//using namespace __gnu_pbds;
using namespace std;
 
#define ll long long int 

int main(){
	string s1,s2;   cin>>s1>>s2;
	vector<char> ans;
	for(int i=0;i<s1.size();i++){
		if(s1[i]==s2[i]){
			ans.push_back('0');
		}
		else{
			ans.push_back('1');
		}
	}
	for(int i=0;i<s1.size();i++){
		cout<<ans[i];
	}
}