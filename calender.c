#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,s,nd,count,start;
    char a[7][3]={"SU","MO","TU","WE","TH","FR","SA"};
    printf("Enter date of first sunday and number of days in a month\n");
    scanf("%d%d",&s,&nd);
    if(s>7 && nd!=28 && nd!=29 && nd!=30 && nd!=31)
    {
        printf("INVALID INPUT\n");
        exit(0);
    }
    s=s-1;
    if(s==0)
        start=0;
    else
        start=7-s;
    for(i=0;i<7;i++)
    {
    printf("%s\t",a[i]);
    }
    printf("\n");
    for(j=0;j<start;j++)
        printf("\t");
    count=start;
    for(i=1;i<=nd;i++)
    {
       if(count<6)
       {
           printf("%d\t",i);
          count++;
       }
       else
       {
           printf("%d\n",i);
           count=0;
       }
    }
}
