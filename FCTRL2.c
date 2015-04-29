#include<stdio.h>
int main()
{
    int t,n,f,m,i,x,temp=0;
    scanf("%d",&t);
    while(t--)
    {
        int a[200];
        scanf("%d",&n);
        i=0;
        m=0;
        int nt=n;
        while(nt>0)
        {
            a[i]=nt%10;
            nt=nt/10;
            m++;
            i++;
        }
        int j=n-1;
        while(j>0)
        {
            for(i=0;i<m;i++)
            {
                x=a[i]*j+temp;
                a[i]=x%10;
                temp=x/10;
            }
            while(temp>0)
            {
                a[i]=temp%10;
                m++;
                i++;
                temp=temp/10;
            }
            j--;
        }
        for(i=m-1;i>=0;i--)
            printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}
 