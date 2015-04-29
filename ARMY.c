#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char c;
        scanf("%c",&c);
        int ng,nm;
        scanf("%d%d",&ng,&nm);
        int a,b;
        int i;
        scanf("%d",&a);
        int mg=a;
        for(i=1;i<ng;i++)
        {
            scanf("%d",&a);
            if(a>mg)
                mg=a;
        }
        scanf("%d",&b);
        int m=b;
        for(i=1;i<nm;i++)
        {
            scanf("%d",&b);
            if(b>m)
                m=b;
        }
        if(mg>=m)
            printf("Godzilla\n");
        else
            printf("MechaGodzilla\n");
    }
    return 0;
}
 