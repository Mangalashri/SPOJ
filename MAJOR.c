#include <stdio.h>
int main(void) {
	// your code goes here
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		int a[2001]={0};
		int i,f=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			int k;
			scanf("%d",&k);
			a[k+1000]++;
		}
		for(i=0;i<2001;i++)
		{
			if(a[i]>n/2)
			{
				printf("YES %d\n",i-1000);
				f=1;
				break;
			}
		}
		if(f==0)
			printf("NO\n");
	}
	return 0;
} 