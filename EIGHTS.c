#include<stdio.h>
int main()
{
    long long int t,i,k,s;
    scanf("%lld",&t);
    while(t--)
    {
        s=192;
        scanf("%lld",&k);
        for(i=1;i<k;i++)
            s+=250;
        printf("%lld\n",s);
    }
    return 0;
}
 