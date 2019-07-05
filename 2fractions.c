#include <stdio.h>
struct fraction
{
    int num;
    int den;
};
void input(struct fraction *a)
{
    printf("Enter numerator:");
    scanf("%d",&a->num);
     printf("Enter denominator:");
    scanf("%d",&a->den);
}
void compute(struct fraction a,struct fraction b,struct fraction *r)
{
    r->num=a.den*b.num+a.num*b.den;
    r->den=a.den*b.den;
}
void output(struct fraction r)
{
    printf("Result is:%d/%d",r.num,r.den);
}
int main()
{
    struct fraction a,b,r;
    input(&a);
    input(&b);
    compute(a,b,&r);
    output(r);
}
