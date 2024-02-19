#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("enter the first string");
    scanf("%s",str1);
    printf("enter the second string");
    scanf("%s",str2);
    int len1=0,len2=0;
    int j=0,k=0;
    while(str1[j]!='\0')
    {
        len1++;
        j++;
    }
    while(str2[k]!='\0')
    {
        len2++;
        k++;
    }
    int count=0;
    for(int i=0;i<len1;i++)
    {
        if(str1[i]==str2[i])
        {
            count=count+1;
        }
    }
    if(count==len1)
    {
        printf("%d",len1-len2);
    }
    else if(len1>len2)
    {
        printf("%d",len1-len2);
    }
    else
    {
        printf("%d",len1-len2);
    }
}