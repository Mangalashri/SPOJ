#include<stdio.h>
int main()
{
    int t,n,a[1000],b[1000],i,j,ntemp,r,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        i=0;
        ntemp=n;
        while(ntemp--)
        {
            scanf("%d",&a[i]);
            i++;
        }
        ntemp=n;
        i=0;
        while(ntemp--)
        {
            scanf("%d",&b[i]);
            i++;
        }
        r=0;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(b[i]>b[j])
                {
                    temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            r=r+a[i]*b[i];
        }
        printf("%d\n",r);
    }
    return 0;
}
 
