#include<stdio.h>
int main()
{
    int i,n,a1,a2,a3,c=0,s=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {

        scanf("%d %d %d",&a1,&a2,&a3);
      //  if(a1==1&&a2==1||a1==1&&a3==1||a2==1&&a3==1){
       //     s++;
        }

   while(n--){
        if(a1==1)

            c++;

        if(a2==1)

            c++;

        if(a3==1)

            c++;

        if(c>=2)

            s++;

        c=0;
    }



    printf("%d",s);

}

