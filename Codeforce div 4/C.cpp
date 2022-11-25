#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int t;      cin>>t;
    while(t--){
        string arr[8];
        for(int i=0;i<8;i++){
            cin>>arr[i];
        }
        int rcount=0,b_count=0;
        int cnt=0;
        for(int i=0;i<8;i++){
            rcount=0;
            for(int j=0;j<8;j++){
                if(arr[i][j]=='R'){
                    rcount++;
                }
            }
            if(rcount==8){
                cout<<"R"<<endl;
                cnt=1;
                break;
            }
        }
        if(!cnt){
            for(int i=0;i<8;i++){
            b_count=0;
            for(int j=0;j<8;j++){
                if(arr[j][i]=='B'){
                    b_count++;
                }
            }
            if(b_count==8){
                cout<<"B"<<endl;
                break;
            }
        }
        }

    }
}

/*
1
....B...   B=1 R=0                                                                                                      
....B...   B=2 R=0                                                                                                        
....B...   B=3 R=0                                                                                                    
RRRRRRRR   R=8                                                                                                      
....B...                                                                                                         
....B...                                                                                                         
....B...                                                                                                         
....B...


*/


