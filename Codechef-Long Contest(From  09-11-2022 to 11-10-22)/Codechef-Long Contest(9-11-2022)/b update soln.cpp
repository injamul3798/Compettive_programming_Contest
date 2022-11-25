#include <iostream>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	int t;      cin>>t;
	while(t--){
	    int n;    cin>>n;
	    int ans[n+1];
	    ll sum=0;
	    for(int i=1;i<=n;i++){
	         cin>>ans[i];
	         sum+=ans[i];
	    }
	    
	    ll mod=sum%998244353;
	    ll fans=mod*(mod-1);
	    ll inasn=fans%998244353;
	    
	    cout<<inasn<<endl;
	    
	    
	    
	   
	}
	return 0;
}
