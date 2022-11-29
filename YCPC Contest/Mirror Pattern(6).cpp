/*5
1 2 3 4 5
2       4
3       3
4       2
5 4 3 2 1    */

#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long int
using namespace std;

int main(){
    int n;    cin>>n;
    if(n==1){
        cout<<n<<endl;
        return 0;
    }
    int v[n+1];
    for(int i=1;i<n+1;i++){
        v[i]=i;
    }
    int left=2,right=n-1;
    for(int i=1;i<n+1;i++){
        cout<<v[i];
    }
    cout<<endl;
    int nn=n-2;
    int space=nn;
    while(nn){   
            cout<<v[left];
            for(int i=1;i<=space;i++){
              cout<<" ";
            }
            cout<<v[right]<<endl;
            left++;
            right--;
            nn--;
            if(nn==0){
               break;
            }
    }
    for(int i=n;i>=1;i--){
        cout<<v[i];
    }
    cout<<endl;
}

 


