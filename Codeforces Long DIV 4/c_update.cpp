#include<bits/stdc++.h>
#include<stdio.h>
#define lf long long
using namespace std;

#define ll long long int 
int main(){
	int t;   cin>>t;
	while(t--){
		  int n;        cin>>n;
		  vector<int> v;
		  for(int i=0;i<n;i++){
		  	int xx;      cin>>xx;
		  	v.push_back(xx);
		  }


		  vector<int> for_sort;
		  for(int i=0;i<n;i++){
		  	 for_sort.push_back(v[i]);
		  }
		  sort(for_sort.begin(),for_sort.end());
		  int max_value=for_sort[n-1];
		  int second_max=for_sort[n-2];
		  //cout<<max_value<<endl;
		 //break;

		  int ans[n];
		  for(int i=0;i<n;i++){
		  	  if(v[i]=max_value){
		  	  	  
		  	  }
		  	  else{
		  	  	ans.push_back(v[i]-max_value);
		  	  }
		  }
		  for(int i=0;i<n;i++){
		  	cout<<ans[i]<<" ";
		  }
		  cout<<endl;

	}
}