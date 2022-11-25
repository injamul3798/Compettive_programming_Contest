#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
using namespace std; 


/*
 a directed acyclic graph (DAG) is a graph that is directed and without cycles connecting the other edges.

*/
int main() {
	// your code goes here
	int t;      cin>>t;
	while(t--){
		//where n=vertices ,k=sources and l=sinks
	    ll n,k,l;          cin>>n>>k>>l;
	    if(n>=(k+l)){
            ll vertices=n-(k+l);
            ll ans=(k*l)+(k*vertices)+(l*vertices)+((vertices*(vertices-1))/2);
            cout<<ans<<endl;
	    }
	    else{
	    	ll f_sources=k-((k+l)-n);
	    	ll f_sink=l-((k+l)-n);
	    	cout<<f_sources*f_sink<<endl;
	    }
	}
}


/*


1. Source e kono icoming edge hobena but just outgoing edge hobe
2. But sink e incoming edge hobe  and outgoing edge hobena..



N K L  WHERE K=SOURCE AND L=SINK

*/
