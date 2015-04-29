#include <stdio.h>
#include<string.h>
int a[1000000];
int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	int i;
	long long s=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
			s+=a[i];
		else 
			s+=a[i+1];
	}
	printf("%lld\n",s);
	return 0;
}
 