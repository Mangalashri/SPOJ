#include<stdio.h>
int mod(int x,int n)
{
    int t=1,m;
    if(n==0)
        return 1;
    if(n%2==0)
    {
        m=mod(x,n/2);
        return ((m%10)*(m%10))%10;
    }
    else
    {
        return((x%10)*(mod(x,n-1)%10))%10;
    }
 
}
int main()
{
    int t,x,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&x,&n);
        m=mod(x,n);
        printf("%d\n",m);
    }
    return 0;
}
 