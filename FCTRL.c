#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    int n;
    scanf("%d",&t);
    while(t--)
    {
        int temp=0;
        scanf("%d",&n);
        while(n>0)
        {
            n=n/5;
            temp=temp+n;
        }
        printf("%d\n",temp);
    }
    return 0;
}
 