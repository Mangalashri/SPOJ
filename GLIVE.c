#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int i,s=0,f=1;
	for(i=0;i<10;i++)
	{
		int n;
		scanf("%d",&n);
		if(100-s>=s+n-100)
			s+=n;
		else
		{
			printf("%d",s);
			f=0;
			break;
		}
	}
	if(f)
		printf("%d",s);
	return 0;
} 