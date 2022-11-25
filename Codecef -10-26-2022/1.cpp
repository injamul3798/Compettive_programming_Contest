#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;         cin>>t;
	while(t--){
	    int x,y,z;    cin>>x>>y>>z;
	    
	    if(z%y==0){
            int ans=z/y;
            if(x>=ans){
            	cout<<"YES"<<endl;
            }
            else{
            	cout<<"NO"<<endl;
            }
	    }  
	    else{
	    	cout<<"NO"<<endl;
	    }
	}
	return 0;
}


N Q = 5 3
1 3 4 4 2
1 5
a1 = 2 2 5 3 3

3 4 
2 2 6 2 3

2 2
2 3 6 2 3