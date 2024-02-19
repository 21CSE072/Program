#include <stdio.h>
int main() {
   int n;
   while(1)
   {
       scanf("%d",&n);
       if(n>=0&&n<=9)
       {
           printf("%d",n);
           break;
       }
       else
       {
           printf("Invalid enter a valid number");
       }
   }
   return 0;
}
