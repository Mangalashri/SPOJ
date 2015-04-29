#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);int z=0;
	while(t--)
	{
		z++;
		long long n,c,f;
		scanf("%lld%lld%lld",&n,&f,&c);
		long long fc=2*f,i,a[n],d,s=fc+c*n,m;
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		for(i=0;i<n-1;i++)
		{
			d=a[i+1]-a[i]-1;
			m=d*c;
			if(m>fc)
				s+=fc;
			else
				s+=m;
		}
		printf("Case #%d: %lld\n",z,s);
	}
	return 0;
}
 