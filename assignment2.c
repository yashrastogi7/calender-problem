#include <stdio.h>
int armstrong(int);
int perfect(int);
int i,num;
void main()
{
    int a=0,p=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    a=armstrong(num);
    p=perfect(num);
    if(a==1 && p==1)
    printf("Entered number %d is both armstrong and perfect",num);
    if(a==1 && p!=1)
    printf("Entered number %d is armstrong only",num);
    if(a!=1 && p==1)
    printf("Entered number %d is perfect only",num);
    if(a!=1 && p!=1)
    printf("Entered number %d is neither armstrong nor perfect",num);
}
int armstrong(int n)
{
    int sum=0,r;
    while(n!=0)
    {
        r=n%10;
        sum+=(r*r*r);
        n=n/10;
    }
    if(sum==num)
        return 1;
    else
        return 0;
}
int perfect(int n)
{
    int sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
 if(sum==num)
        return 1;
    else
        return 0;
}
