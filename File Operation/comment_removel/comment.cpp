#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int 
/*This is another commnet
multiline */
int main(){
     //taking pointer for input
     FILE *input,*output;
     input = fopen("input.c","r"); // input file where we will read 
     output = fopen("output.c","w");   // output file
     char ch;
     // Now,taking character from file
     while((ch=fgetc(input))!=EOF){
          //checking character is equal to // or /*
          if(ch=='/'){
               ch = fgetc(input);// taking another string
               if(ch=='/'){
                    while((ch=fgetc(input))!='\n');
               }
               //but if it is multiline comment
               else if(ch=='*'){
                    while((ch=fgetc(input))!='\n'){
                         if((ch=fgetc(input))=='*' && (ch=fgetc(input))=='/'){
                              ch='\n';
                              break;
                         }
                    }
               }
               else{
                    fputc('/',output);
               }

          }
          fputc(ch,output);
     }

     fclose(input);
     fclose(output);
     return 0;          
}
