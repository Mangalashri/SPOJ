#include <stdio.h>
int main(void) {
	// your code goes here
	int t;
	char s[50001];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		int i,temp=0,temp1=0;
		for(i=0;s[i];i++)
		{
			temp=(temp*10+(s[i]-'0'))%252;
			temp1=(temp1*10+(s[i]-'0'))%525;
		}
		if(temp==0)
			printf("Yes ");
		else
			printf("No ");
		if(temp1==0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
} 
