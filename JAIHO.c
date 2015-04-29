#include<stdio.h>
int main()
{
	int t,a,b,y;
	char c;
	scanf("%d",&t);
	while(t--)
    {
    	scanf("%d%c%d%c%d",&a,&c,&b,&c,&y);
    	if(y<1947)
    		printf("Invalid.\n");
    	else
    	{
	    	int l=0;int a=1947;
			if(y==a)
				return 1;
			while(a<=y)
			{	
				if((a%100!=0&&a%4==0)||a%400==0)
					l++;
				a++;
			}
			int b=(y-1947-l)*365+l*366;
			if(b%7==0)
	    		printf("Yes.\n");
	    	else
	    		printf("No.\n");
    	}
    }
    return 0;
} 