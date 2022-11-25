#include<bits/stdc++.h>
 
//using namespace __gnu_pbds;
using namespace std;
 
#define ll long long int 
//#define for(i to n) for(int i=0;i<n;i++)
 
 
int main(){
    //Faster;
    int t;     cin>>t;
    while(t--){
        int n,m;    cin>>n,m;
        if(m%n==0){
            cout<<"YES"<<endl;
        }
        else{
            int ans=0;
            for(int i=1;i<=n;i++){
                 n = n+i;
                 m  = m+i;
                 if(m%n==0){
                    ans++;
                    break;
                 }
            }
            if(ans){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }

         
         
        }
}
