#include <stdio.h>
 
int main(void) {
	// your code goes here
	int i,a[4],b[4],t;
	while(1)
	{
		scanf("%d",&a[0]);
		if(a[0]==-1)
		{
			for(i=0;i<7;i++)
				scanf("%d",&t);
			break;
		}
		for(i=1;i<4;i++)
			scanf("%d",&a[i]);
		for(i=0;i<4;i++)
			scanf("%d",&b[i]);
		int n;
		if(a[0]%b[0]!=0)
			n=a[0]/b[0]+1;
		else
			n=a[0]/b[0];
		for(i=1;i<4;i++)
		{
			if(a[i]%b[i]!=0)
				t=a[i]/b[i]+1;
			else
				t=a[i]/b[i];
			if(t>n)
				n=t;
		}
		for(i=0;i<4;i++)
			printf("%d ",b[i]*n-a[i]);
		printf("\n");
	}
	return 0;
}