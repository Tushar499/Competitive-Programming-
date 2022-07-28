#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,stLen;
    char str[100];

   // printf("Enter a number:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%s",&str);
        stLen=strlen(str);
        if(stLen<=10)
         printf("%s",str);
        else

            printf("%c%d%c",str[0],stLen-2,str[stLen-1]);
            printf("\n");

        }
    }

