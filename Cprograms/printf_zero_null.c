#include<stdio.h>
#define NULL 0
int main()
{
   if(printf("0") == NULL) // it compare with string thats way false
   printf("inside if block");
   else
   printf("inside else block");
   return 0;
}
