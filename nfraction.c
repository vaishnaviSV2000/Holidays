#include <stdio.h>
struct fr
{
    int num;
    int den;
};
int input1()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    return n;
}

struct fr input(int n,struct fr a[])
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("Enter the numerator:\n");
    scanf("%d",&a[i].num);
    printf("Enter the denominator:\n");
    scanf("%d",&a[i].den);
    }
}
struct fr compute(int n,struct fr a[],struct fr *r)
{
    int i;
    r->den=1;
    r->num=0;
    for(i=0;i<n;i++)
    {
    r->num=a[i].den*r->num+a[i].num*r->den;
    r->den=a[i].den*r->den;
    }
}
void gcd(struct fr *s,struct fr r)
{
    int e,m,c;
    e=(r.num>r.den)?r.num:r.den;
    m=(r.num<r.den)?r.num:r.den;
    c=e%m;
    s->den=r.den/c;
    s->num=r.num/c;
}
void output(struct fr s)
{
    printf("The resultant fraction is %d/%d",s.num,s.den);
}
int main()
{

    struct fr r,s;
    struct fr a[50];
    int n;
    n=input1();
    input(n,a);
    compute(n,a,&r);
    gcd(&s,r);
    output(s);
}
