#include <bits/stdc++.h>
using namespace std;
int main(){ 


         int n;              cin>>n;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

         vector<int> mxIndx(1111,-1);
 
         for(int i=1;i<=n;i++){
            mxIndx[a[i]]=i;
         }

         for(int i=1;i<=50;i++){
            cout<<mxIndx[i]<<" ";
         }


    }