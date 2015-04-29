#include <stdio.h>
 
int main(void) {
	// your code goes here
	int x,y,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x,&y);
		if(x%2==1&&y%2==1)
			printf("Ramesh\n");
		else
			printf("Suresh\n");
	}
	return 0;
}
 