#include<bits/stdc++.h>
#include<stdio.h>
 
//using namespace __gnu_pbds;
using namespace std;
 
#define ll long long int 
//#define for(i to n) for(int i=0;i<n;i++)
 
 
int main(){
     FILE *fp;

     //define file into writting mode
     fp = fopen("witting_into_file.txt","w");

     char str[] = "Hey, I am Injamul .Currently studying BSc in CSE..\n";
     //writting into file
     for(int i=0;str[i]!='\n';i++){
        fputc(str[i],fp);
     }
     
     //Also there is some to writting to a file
     fputs("\nThis is another way to write into file..\n",fp);
     fprintf(fp,"\nBy using fprintf, we can write into file..\n");



     fclose(fp);
     return 0;          
}
