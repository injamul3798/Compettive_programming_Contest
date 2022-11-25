#include <stdio.h>
#include <stdlib.h>

struct twoNum{
   int n1, n2;
};

int main(){
   int n;
   struct twoNum num;
   FILE *fptr;
   if ((fptr = fopen("program.bin","wb")) == NULL){
       printf("Error!");
       exit(1);
   }
   for(n = 1; n < 5; ++n){
      num.n1 = n;
      num.n2 = 5*n;    
      fwrite(&num, sizeof(struct twoNum), 1, fptr); 
   }
   fclose(fptr); 
  
   return 0;
}