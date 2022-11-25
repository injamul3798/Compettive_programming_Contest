#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int 

int main(){
     int n;  cin>>n;
     string s;
     int x_count=0,o_count=0; 
     for(int i=0;i<n;i++){
          cin>>s;
          for(int i=0;i<n;i++){
               if(s[i]=='x'){
                    x_count++;
               }
               else{
                    o_count++;
               }
          }

     }
     if(x_count%2==1 && o_count%2==1){
          cout<<"NO"<<endl;
     }
     else{
          cout<<"YES"<<endl;
     }
     return 0;          
}
