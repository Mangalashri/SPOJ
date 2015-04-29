#include<stdio.h>
int main()
{
    int t,i,j,temp,s,c,n,f,count=0;
    scanf("%d",&t);
    while(t--)
    {
        count++;
        scanf("%d%d",&n,&f);
        int a[f];
        s=0;
        c=0;
        for(i=0;i<f;i++)
        {
            scanf("%d",&a[i]);
            s+=a[i];
        }
        if(s<n)
            printf("Scenario #%d:\nimpossible\n\n",count);
        else{
        for(i=0;i<f-1;i++)
        {
            for(j=i+1;j<f;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        s=0;
        for(i=f-1;;i--)
        {
            c+=a[i];
            s++;
            if(c>=n)
                break;
        }
        printf("Scenario #%d:\n%d\n\n",count,s);
        }
    }
    return 0;
}
 