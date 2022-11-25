#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;      cin>>t;
    while(t--){
        int n;     cin>>n;
        vector<int> ans;
        set<int> s;
        for(int i=0;i<n;i++){
            int x;    cin>>x;
            ans.push_back(x);
            s.insert(x);
        }

        int set_length = s.size();
        if(n==set_length){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}
