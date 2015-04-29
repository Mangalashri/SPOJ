#include<stdio.h>
int rev(int a)
{
    int r=0;
    while(a>0)
    {
        r=r*10+a%10;
        a=a/10;
    }
    return r;
}
 
int main()
{
    int t;int a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        a=rev(a);
        b=rev(b);
        c=a+b;
        if(c%10==0)
        {
            c=c/10;
        }
        c=rev(c);
        printf("%d\n",c);
    }
    return 0;
}
 