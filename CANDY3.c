#include<stdio.h>
int main()
{
    long long int n,t,i,s;
    char c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%c",&c);
        scanf("%lld",&n);
        long long int a[n];
        s=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            s+=a[i]%n;
        }
        if(s%n==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
 