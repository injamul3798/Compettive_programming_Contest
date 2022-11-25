#include<bits/stdc++.h>
 
// author
// Injamul
//using namespace __gnu_pbds;
using namespace std;
 
#define ll long long int 

int main(){
	int t;      cin>>t;
	while(t--){  
	int n;        cin>>n;
	string s1 ;   cin>>s1;
	//vector<char> ans;
	int cnt=0,a=0;
	for(int i=0;i<s1.size();i++){
		 if(s1[i]=='Q'){
		 	cnt++;
		 }
		 else{
		 	a++;
		 }
	}
	if(cnt>a){
		cout<<"NO"<<endl;
	}
	cout<<"YES"<<endl;
}
	 
}