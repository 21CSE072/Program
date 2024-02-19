#include <stdio.h>
#include <string.h>
int main() {
    char str1[100];
    char str2[100];
    printf("enter the first string");
    scanf("%s",str1);
    printf("enter the second string");
    scanf("%s",str2);
    int len1=0,len2=0,k=0,m=0;
    while(str1[k]!='\0')
    {
        len1++;
        k++;
    }
    while(str1[m]!='\0')
    {
        len2++;
        m++;
    }
    int len=len1;
    int i=0;
    while(str2[i]!='\0')
    {
        str1[len]=str2[i];
        len++;
        i++;
    }
    printf("%s",str1);
    return 0;
}
