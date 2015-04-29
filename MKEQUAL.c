SPOJ submission 12033030 (C) plaintext list. Status: AC, problem MKEQUAL, contest SPOJ. By mangalashri (shri), 2014-07-27 19:29:16.
#include <stdio.h>
 
int main(void) {
	// your code goes here
	int x,n,t,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n],s=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			s+=a[i];
		}
		if(s%n==0)
			printf("%d\n",n);
		else
			printf("%d\n",n-1);
	}
	return 0;
}
 
