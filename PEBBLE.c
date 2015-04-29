#include <stdio.h>
 
int main(void) {
	// your code goes here
	char s[1001];
	int t=0;
	while(scanf("%s",s)!=EOF)
	{
		t++;
		int i,c=0,f=0;
		for(i=0;s[i];i++)
		{
			if(f)
			{
				if(s[i]=='1')
					s[i]='0';
				else
					s[i]='1';	
			}
			if(s[i]=='1')
			{
				c++;
				if(f)
					f=0;
				else
					f=1;
				s[i]='0';
			}
		}
		printf("Game #%d: %d\n",t,c);
	}
	return 0;
}
 