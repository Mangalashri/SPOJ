#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int t,n,r1,r2,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++)
			scanf("%d%d",&a[i],&b[i]);
		int m=a[0],mi=0,f=0;
		for(i=1;i<n;i++)
			if(a[i]>m)
			{
				m=a[i];
				mi=i;
			}
		for(i=0;i<n;i++)
			if(i!=mi)
			{
				if(b[i]>m)
					f=1;
			}
		if(f)
			printf("-1\n");
		else
			printf("%d\n",mi+1);
	}
	return 0;
} 