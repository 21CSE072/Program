#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   for(int i=1;i<=20;i++)
   {
       printf("%d*%d=%d",i,n,i*n);
       printf("\n");
   }
   return 0;
}
