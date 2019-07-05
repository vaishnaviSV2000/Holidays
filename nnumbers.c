#include <stdio.h>
int input1()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    return n;
}
void input2(int n,int a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter a number:");
        scanf("%d",&a[i]);
    }
}
void compute(int n,int *r,int a[])
{
    int i;
    *r=0;
    for(i=0;i<n;i++)
    {
        *r=a[i]+*r;
    }
}
void output(int n,int a[],int r)
{
    int i;
    for(i=0;i<n-1;i++)
    {
       printf("%d+",a[i]);
    }
    printf("%d=",a[n-1]);
    printf("%d",r);
}
int main()
{
    int n,a[100],r;
    n=input1();
    input2(n,a);
    compute(n,&r,a);
    output(n,a,r);
}
