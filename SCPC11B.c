#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void) {
	// your code goes here
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==0)
			break;
		int a[n],f=0,t,i,j;
		scanf("%d",&a[0]);
		for(i=1;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++)
			for(j=i+1;j<n;j++)
				if(a[i]>a[j])
				{
					int t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
		//for(i=0;i<n;i++)
		//	printf("%d ",a[i]);
		for(i=0;i<n-1;i++)
		{
			if(a[i+1]-a[i]>200)
				f=1;
		}
		//printf("%d ",a[i]);
		if((1422-a[i])*2>200)
			f=1;
		if(!f)
			printf("POSSIBLE\n");
		else
			printf("IMPOSSIBLE\n");
	}
	return 0;
}
 