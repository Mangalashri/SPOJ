#include <stdio.h>
 
int main(void) {
	// your code goes here
	int t;
	long long int a,b,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
		printf("%lld\n",a*a-2*b);
	}
	return 0;
}
 