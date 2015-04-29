include<stdio.h>
int main()
{
    int n,t,c,i;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        int a[n],b[n];
        c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            t=a[i];
            b[t-1]=i+1;
            //printf("%d ",b[t]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i])
                c++;
            else
            	break;
        }
        if(c==n)
            printf("ambiguous\n");
        else
            printf("not ambiguous\n");
    }
    return 0;
}
 