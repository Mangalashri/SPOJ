#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i,n,j;
	scanf("%d",&n);
	while(n!=0)
	{
		unsigned long long int a[n],b[n];
		for(i=0;i<n;i++)
			scanf("%llu",&a[i]);
		for(i=0;i<n;i++)
			scanf("%llu",&b[i]);
		sort(a,a+n);
		sort(b,b+n);
		unsigned long long int s=0;
		for(i=0,j=n-1;i<n;i++,j--)
			s+=a[i]*b[j];
		printf("%llu\n",s);
		scanf("%d",&n);
	}
	return 0;
} 