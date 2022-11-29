#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long int 
int main(){
	
	 int t;       cin>>t;
	 while(t--){
	 	int n;      cin>>n;
	 	int temp=0;
	 	int cnt=0;
	 	if(n==0 || n==1){
	 		//cout<<"1"<<endl;
	 		cout<<"1"<<endl;
	 	}
	 	else{   
	 	    for(int i=0;n>temp;i++) {
             temp=pow(2,i);
	 	    }
	 	    cout<<temp<<endl;
	 	}
	 	 
	 }
}

/*
n=7
i=0
count=1

i=1
count=1
i=2
count=4
i=3
count=8

so ans is =8   */