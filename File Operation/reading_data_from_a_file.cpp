#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int 

int main(){
     FILE *fp;

     //define file into reading mode mode
     fp = fopen("read_data.txt","r");
     char str[60];
     fgets(str,80,fp);
     printf("%s\n",str);

     //count vowel character
     int count=0;
     int cons=0;
     int space=0;
     for(int i=0;i<80;i++){
          if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
               count++;
          }
          else if(str[i]==' '){
               space++;
          }
          else{
               cons++;
          }
     }
     cout<<"Total vowel Value is: "<<count<<endl;
     cout<<"Total consunent Value is: "<<cons<<endl;
     cout<<"Total space Value is: "<<space<<endl;

     fclose(fp);
     return 0;          
}
