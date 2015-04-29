#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int t,m=0;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		m++;
		int a[n],i;
		long long s=1,k=0;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			if(a[i]>0)
				s+=a[i];
			else
			{
				if(s+a[i]<=0){
				k+=abs(s+a[i])+1;
				s=s+abs(s+a[i])+1+a[i];
				}
				else
					s+=a[i];
			}
		}
		printf("Scenario #%d: %lld\n",m,k+1);
	}
	return 0;
}
 