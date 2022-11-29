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
		cout<<"Draw"<<endl;
	}
}