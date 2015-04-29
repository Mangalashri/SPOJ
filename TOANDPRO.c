#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    int n,len,b[200],c,d,i,j,dt;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        scanf("%s",a);
        len=strlen(a);
        d=len/n;
        for(i=0,j=0;i<len-n;j++)
        {
            b[j]=i;
            if(i%2==0)
                i+=n*2-1;
            else
                i++;
        }
        b[j]=i;
        dt=n;
        while(dt>0)
        {
	        for(i=0;i<d;i++)
	        {
	            c=b[i];
	            printf("%c",a[c]);
	            if(i%2==0)
	                b[i]+=1;
	            else
	                b[i]-=1;
 
	        }
	        dt--;
        }
        printf("\n");
    }
    return 0;
}