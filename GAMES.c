#include <stdio.h>
#include<string.h>
long long gcd(long long int a,long long int b)
{
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}
int main(void) {
	// your code goes 
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[15];
		scanf("%s",s);
		int l=strlen(s);
		int i,a=0,d=1,c=0,flag=0;
		for(i=l-1;i>=0;i--)
		{
			if(s[i]=='.')
			{
				flag=1;
				break;
			}
			c++;
		}
		for(i=0;i<l;i++)
			if(s[i]!='.')
				a=a*10+s[i]-'0';
		if(flag)
		for(i=0;i<c;i++)
			d=d*10;
		printf("%d\n",d/gcd(a,d));
	}
	return 0;
}
 
