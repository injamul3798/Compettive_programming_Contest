#include<bits/stdc++.h>
 
//using namespace __gnu_pbds;
using namespace std;
 
#define ll long long int 
 
 
int main(){
    //Faster;
 
    int t;                  cin>>t;
    int count=0;
    int ans=0;
    while(t--){
         string s1;          cin>>s1;
         count=0;
         int x_count=0;
         for(int i=0;i<s1.size();i++){
            if(s1[i]=='o'){
                count++;
            }
         }
         if(count>0){
            for(int i=0;i<s1.size();i++){
                if(s1[i]=='x'){
                    x_count++;
                }
            }
         }
         if(x_count%2==1){
            ans++;
         }
    }
    if(count%2==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}