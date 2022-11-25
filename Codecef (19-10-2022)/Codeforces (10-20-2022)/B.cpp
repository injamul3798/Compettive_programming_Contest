#include<bits/stdc++.h>
 
//using namespace __gnu_pbds;
using namespace std;
 
#define ll long long int 
 
 
int main(){
    //Faster;
 
    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;
        vector<int> s1;
        ll sum_for_s1=0;
        for(int i=0;i<n;i++){
        	int x;        cin>>x;
        	s1.push_back(x);
        	sum_for_s1+=x;
        }

        vector<int> s2;
        ll sum_for_s2=0;
        int mx = INT_MIN;
        for(int j=0;j<n;j++){
        	int y;      cin>>y;
        	s2.push_back(y);
        	sum_for_s2+=y;
        }

        
        for(int j=0;j<n;j++){
        	mx = max(mx,s2[j]);
        }

        cout<<sum_for_s1+sum_for_s2-mx<<endl;
        
     
    }
}