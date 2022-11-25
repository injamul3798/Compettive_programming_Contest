#include <bits/stdc++.h>


using namespace std;

int main(){
	int t;                    cin>>t;
	while(t--){
		int n;                cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		int cnt=0,l=0,cons=0;
		for(int i=0;i<n;i++){
			cons++;
            if(i==n-1){
            	if(l=0 || v[l-1]>v[l]){
            		cnt++;
            	}
            }
            else{
            	if(v[i]==v[i+1])    continue;
            	else if(v[i+1]<v[i]){
            		cons=0;
            		l=i+1;
            	}
            	else{
            		if(v[l-1]>v[l]){
            			cnt++;
            		}
            		l=i+1;
                    cons=0;
            	}
            }
		}
		if(cnt==1)  cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}