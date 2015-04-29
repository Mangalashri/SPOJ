#include<stdio.h>
#include<string.h>
int main()
{
    int t,p,r,s,len,i;
    char c,a[1500];
    scanf("%d",&t);
    while(t--)
    {
        p=0,r=0,s=0;
        scanf("%c",&c);
        scanf("%s",a);
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if(a[i]=='m')
             {
             	s=0;
             	break;
             }
            else
                s=s*10+(a[i]-48);
        }
        scanf("%c",&c);scanf("%c",&c);
        scanf("%s",a);
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if(a[i]=='m')
               {
               	p=0;
               	break;
               }
            else
                p=p*10+(a[i]-48);
        }
        scanf("%c",&c);scanf("%c",&c);
        scanf("%s",a);
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if(a[i]=='m')
            {
            	r=0;
            	break;
            }
 
            else
                r=r*10+(a[i]-48);
        }
        if(p==0)
        {
            p=r-s;
        }
        else if(r==0)
            r=p+s;
        else
            s=r-p;
        printf("%d + %d = %d\n",s,p,r);
    }
    return 0;
}
 