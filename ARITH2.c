#include <stdio.h>
 
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int s=0,a,b;
		char c;
		scanf("%lld",&a);
		//printf("%lld ",a);
		s+=a;
		while(1)
		{
			int i;
			for(i=0;;i++)
			{
				scanf("%c",&c);
				if(c!=' ')
					break;
			}
			//printf("%c ",c);
			if(c=='=')
				break;
			scanf("%lld",&b);
			//printf("%lld ",b);
			switch(c)
			{
				case '+':{s+=b;break;}
				case '-':{s-=b;break;}
				case '*':{s*=b;break;}
				case '/':{s/=b;break;}
			}
		}
		printf("%lld\n",s);
	}
	return 0;
}
 