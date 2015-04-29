SPOJ submission 12222793 (C) plaintext list. Status: AC, problem MANGOES, contest SPOJ. By mangalashri (shri), 2014-08-24 09:59:11.
#include <stdio.h>
int main(void) {
	// your code goes here
	long long n,t,i;
	scanf("%lld",&t);
	while(t--)
	{
		long long s;
		scanf("%lld",&n);
		s=n-(2+n/2-1);
		s=(s*s)%n;
		printf("%lld\n",s);
	}
	return 0;
}
 
