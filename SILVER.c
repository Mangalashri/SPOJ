#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	while(1)
	{
		int n,c=0,i;
		scanf("%d",&n);
		if(n==0)
			break;
		for(i=0;;i++)
		{
			int k=pow(2,i);
			if(k<=n)
				c++;
			else
				break;
		}
		printf("%d\n",c-1);
	}
	return 0;
} 