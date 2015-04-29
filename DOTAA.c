#include <stdio.h>
 
int main(void) {
	// your code goes here
	int t,n,m,i,d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&n,&m,&d);
		int a[n],b[n],f=1,s=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]%d!=0)
				b[i]=a[i]/d;
			else
				b[i]=0;
		}
		for(i=0;i<n;i++)
			s+=b[i];
		if(s>=m)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
 