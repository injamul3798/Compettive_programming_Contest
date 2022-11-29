#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long int 
int main(){
    int n1,n2;      cin>>n1>>n2;
	if(n1>n2){
		cout<<"Argentina"<<endl;
	}
	else if(n2>n1){
		cout<<"Brazil"<<endl;
	}
	else{
		string s1,s2;
		while(1){
			cin>>s1>>s2;
			int zero_count=0;
			int one_count=0;
			for(int i=0;i<s1.size();i++){
			
			   if(s1[i]=='1'){
					one_count++;
				}
			}
            int s2_count=0;
			for(int i=0;i<s1.size();i++){
			
			   if(s2[i]=='1'){
					s2_count++;
				}
			}
			if(one_count>s2_count){
				cout<<"Argentina"<<endl;
				break;
			}
			else if(one_count<s2_count){
                cout<<"Brazil"<<endl;
                break;
			}
			else{
				continue;
			}
		}
	}
}