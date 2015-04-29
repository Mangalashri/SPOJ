#include <stdio.h>
int main(void) {
	// your code goes here
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==0)
			break;
		int s=0;
		for(;n>0;n--)
			s+=n*n;
		printf("%d\n",s);
	}
	return 0;
} 