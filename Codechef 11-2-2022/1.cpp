#include<bits/stdc++.h>

using namespace std;
#define ll long long int 
#define LOOP for(int i=0;i<)


int main(){
	int t;        cin>>t;
	while(t--){
		int n;     cin>>n;
		int temp=n;
		int mid=n/2;
		int left=1,right=2;
		int arr[n];
		for(int i=n;i>mid;i--){
             arr[left]=i;
             left = left + 2;
		}
		for(int i=mid;i>=1;i--){
			arr[right]=i;
			right=right+2;
		}
		for(int i=1;i<=n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}