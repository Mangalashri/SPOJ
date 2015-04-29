#include <stdio.h>
 
int main(void) {
	// your code goes here
	int t;
	long long int s,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n%2==0)
			s=n*(n+2)*(2*n+1)/8;
		else
			s=(n*(n+2)*(2*n+1)-1)/8;
		printf("%lld\n",s);
	}
	return 0;
}
 