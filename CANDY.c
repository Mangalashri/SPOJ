#include<stdio.h>
int main()
{
    int n,i,d,s,c;
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
            break;
     	int a[n+1];
        i=0;
        s=0;
        c=0;
        for(;i<n;i++)
        {
            scanf("%d",&a[i]);
            s+=a[i];
        }
        d=s/n;
        if(s%n!=0)
            printf("-1\n");
        else
        {
        	for(i=0;i<n;i++)
                if(a[i]<d)
                	c+=d-a[i];	
            printf("%d\n",c);
        }
    }
    return 0;
 
}