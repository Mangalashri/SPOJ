#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	while(1)
	{
		int n,b;
		scanf("%d%d",&n,&b);
		if(n==0&&b==0)
			break;
		int a[n+1],s[b],i,j,f=0;
		for(i=0;i<=n;i++)
			a[i]=0;
		for(i=0;i<b;i++)
			scanf("%d",&s[i]);
		for(i=0;i<b;i++)
			for(j=i;j<b;j++)
				a[abs(s[i]-s[j])]=1;
		for(i=0;i<=n;i++)
		{
			if(a[i]==0)
			{
				f=1;
				break;
			}
		}
		if(f)
			printf("N\n");
		else
			printf("Y\n");
	}
	return 0;
}
 