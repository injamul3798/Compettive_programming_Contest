#include <bits/stdc++.h>
using namespace std;
int check_coprime(int a,int b){
    if(__gcd(a, b)==1){
        return 1;
    }
    return 0;
}
int main(){
    int t;      cin>>t;
    while(t--){
        int n;     cin>>n;
        vector<int> ans; 

        for(int i=0;i<n;i++){
            int x;    cin>>x;
            ans.push_back(x);  
        }
        // working on condition
        int fmx=INT_MIN;

        for(int i=0;i<n)

        /*
        for(int i=n-1;i>=0;i--){
            for(int j=i;j>=0;j--){
                if(check_coprime(ans[i],ans[j])){
                    fmx = max(fmx,i+j);
                }
            }
        } */
        if(fmx==INT_MIN){
            cout<<"-1"<<endl;
        }
        else{
            cout<<fmx+2<<endl;
        }
    }
}
