#include <stdio.h>

const int MAX=3;

int main () {

   int var[] = {10,100,200};
   int i,*ptr;

   /*letushavearrayaddressin pointer */
   ptr=var;

   for ( i = 0; i < MAX; i++){
       printf("Addressofvar[%d] = %x\n",i,ptr);
       printf("Valueofvar[%d] = %d\n",i,*ptr);

       /*move to the next location*/
       ptr++;
   }
   return 0;
}