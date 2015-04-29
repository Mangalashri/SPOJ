#include <iostream>
#include<algorithm>
using namespace std;
#include<cstdio>
int main() {
	int t;
	scanf("%d\n",&t);
	char s[1001];
	while(t--)
	{
		int a[26]={0},i;
		gets(s);
		//printf("%s\n",s);
		for(i=0;s[i];i++)
		{
			if(s[i]!=' ')
				a[s[i]-65]++;
		}
		int c=1;
		int m=0;
		for(i=1;i<26;i++)
		{
			//printf("%d ",a[i]);
			if(a[i]>a[m])
			{
				m=i;
				c=1;
			}
			else if(a[i]==a[m])
				c++;
		}
		//printf("\n%d ",m);
		if(c>1)
		{
			printf("NOT POSSIBLE\n");
			continue;
		}
		int d;
		if(m>=4)
			d=m-4;
		else
			d=26-4+m;
		printf("%d ",d);
		for(i=0;s[i];i++)
		{
			if(s[i]!=' ')
			{
				if(s[i]-d<65)
					s[i] = s[i]-d + 26;
				else
				 	s[i]=s[i]-d;
			}
		}
		printf("%s\n",s);
	}
	return 0;
} 