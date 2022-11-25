#include<bits/stdc++.h>
 
//using namespace __gnu_pbds;
using namespace std;
 
#define ll long long int 
 
 
int main(){
    //Faster;
 
    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;
        string s1,s2;       cin>>s1>>s2;
        map<char,int> for_first_string;
        map<char,int> second_string;

        // count the frequency
        for(int i=0;i<n;i++){
            for_first_string[s1[i]]++;
            second_string[s2[i]]++;
        }
        int final_ans=0;
        int xans;
        for(int i=0;i<n;i++){
            int fs1=0,fs2=0;
            if(for_first_string.find(s1[i])!=for_first_string.end()){
                 fs1=for_first_string[s1[i]];
                 
            }
            // sqame work for 2nd one
            if(second_string.find(s1[i])!=second_string.end()){
                fs2=second_string[s1[i]];
            }

            xans=min(fs1,fs2);
            final_ans = max(final_ans,xans);
        }
         
        cout<<final_ans<<endl;
     
    }
}

/*

assume we have two string
s1 = aaaa  a=4
s2 = aaab  a=3
min(4,3) = 3
max(ans,3)  = 3

*/


