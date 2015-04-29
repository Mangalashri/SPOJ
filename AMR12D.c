#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int t;
	char s[11],r[11];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		int l=strlen(s),i,j;
		for(i=0,j=l-1;j>=0;i++,j--)
			r[i]=s[j];
		r[i]='\0';
		//printf("%s\n",r);
		if(strcmp(s,r)==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
 