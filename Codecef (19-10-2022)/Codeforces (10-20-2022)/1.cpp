#include <iostream>
using namespace std;

int main() {
	// your code goes here'
	int t;    cin>>t;
	while(t--){
	    int n,m;      cin>>n>>m;
	    // creatoing matrix

	    int chess[m][2];
	    for(int i=0;i<m;i++){
	    	for(int j=0;j<2;j++){
	    		cin>>chess[i][j];
	    	}
	    }

	    if(n<=m){
	    	cout<<"NO"<<endl;
	    }

	    else{
	    	cout<<"YES"<<endl;
	    }
	}
	return 0;
}