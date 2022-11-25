#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long int 
//code by Injamul Haque
//BSc in CSE
void sort_string(string &str){
   sort(str.begin(), str.end());
   int n=str.size();
   char seacrh=str[n-1];
   char ch;
   int count=0;
   for(ch='a';ch<='z';ch++){
   	  count++;
   	  if(ch==seacrh){
   	  	break;
   	  }
   	  //count++;
   }
   cout<<count<<endl;

   // b c f
   // a b c 4
   
}
int main(){
	int t;   cin>>t;
	while(t--){
		  int n;      cin>>n;
		  string s;    cin>>s;
		  sort_string(s);
	}
}


 