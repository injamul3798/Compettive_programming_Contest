#include<bits/stdc++.h>

using namespace std;
#define ll long long int 

int main(){
     int t;            cin>>t;
     while(t--){
           int n;      cin>>n;
           if(n<4){
               for(int i=1;i<=n;i++){
                    cout<<i<<" ";
               }
               cout<<endl;
               continue;
           }
           int mid=(n/2)+1;
           int r=1;
           while(mid<=n){
               cout<<mid<<" ";
               mid++;
               cout<<r<<" ";
               r++;
               if(mid==n && n%2==1){
                    cout<<mid<<" ";
                    break;
               }
           }
           cout<<endl;
           
        
     }
     return 0;          
}




// 4
/*
4 = 3 1 4 2

*/

