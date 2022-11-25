#include<bits/stdc++.h>
 
//using namespace __gnu_pbds;
using namespace std;
 
#define ll long long int 
#define for(i to n) for(int i=0;i<n;i++)
 
 
int main(){
    //Faster;
    int t;        cin>>t;
    while(t--){
         int n,q;         cin>>n>>q;
         vector<int> v;
         int sum=0;
         for(int i=0;i<n;i++){
            int x;         cin>>x;
            v.push_back(x);
            sum += x;
         }
         int count=0;
         while(q--){
            int l,r;      cin>>l>>r;
            int extra_ans=r-l;
            extra_ans++;
            if(extra_ans%2==1){
                count++;
            }
         }
         cout<<sum+count<<endl;
    }
}