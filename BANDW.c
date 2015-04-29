#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char s[501],t[501];
	while(1)
	{
		scanf("%s%s",s,t);
		if(strcmp(s,"*")==0)
			break;
		int f=0,i,c=0;
		for(i=0;s[i];i++)
		{
			if((s[i]=='N'&&t[i]=='B')||(s[i]=='B'&&t[i]=='N'))
			{
				if(!f)
					c++;
				f=1;
			}
			else
			{
				f=0;
			}
		}
		printf("%d\n",c);
	}
	return 0;
}
 