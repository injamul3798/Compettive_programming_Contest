
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;





int ToMakePalindrome(string s) {
        int res = 0;
        while (s.size()) {   
            int i = s.find(s.back());
            if (i == s.size() - 1)
                res += i / 2;
            else
                res += i, s.erase(i, 1);
            s.pop_back();
        }
        cout<<res-2<<endl;; 
    }

int main(){
    string s;
    while(cin>>s){
        ToMakePalindrome(s);
    }
}