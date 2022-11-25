#include<bits/stdc++.h>
 
//using namespace __gnu_pbds;
using namespace std;
 
#define ll long long int 
#define for(i to n) for(int i=0;i<n;i++)
 
 
int main(){
    //Faster;

    /* 

N Q = 5 3
1 3 4 4 2
1 5
a1 = 2 2 5 3 3

3 4 
2 2 6 2 3

2 2
2 3 6 2 3*/
 
    int t;                  cin>>t;
    while(t--){
        int sum=0;
        int n,q;            cin>>n>>q;
        vector<int> v;

        for(i to n){
            int x;          cin>>x;
            v.push_back(x);
        }

        while(q--){
            int r,l;         cin>>l>>r;
            int frst=l-1;
            int cnt=0;
            if(frst%2==0){
                cnt++;
                continue;
            }
            if(cnt==1){
            for(int i=l-1;i<r;i++){
                  if(i%2==0){
                    v[i]=v[i]+1;
                  }
                  else{
                    v[i]=v[i-1];
                  }
            }
           }

           else{
              for(int i=l-1;i<r;i++){
                if(i%2==1){
                    v[i]=v[i]+1;
                }
                else{
                 v[i]=v[i-1];
                }
                }
            }
           }

           for(int i=0;i<n;i++){
            sum += v[i];
           }
           cout<<sum<<endl;


        }
    
}

