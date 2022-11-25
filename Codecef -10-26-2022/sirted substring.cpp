#include<bits/stdc++.h>
 
//using namespace __gnu_pbds;
using namespace std;
 
#define ll long long int 
#define for(i to n) for(int i=0;i<n;i++)
 
 
int main(){
    //Faster;
    int t;     cin>>t;
    while(t--){
        int n;    cin>>n;
        string s1;      cin>>s1;
        int ans=0;
        for(int i=1;i<s1.size();i++){
             if(s1[i]=='0' && s1[i-1]=='1'){
                ans++;
             }
        }
        cout<<ans<<endl;
    }
}