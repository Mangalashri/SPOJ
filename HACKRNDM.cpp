#include <iostream>
#include<cstdio>
using namespace std;
#include<algorithm>
int main() {
	// your code goes here
	int n,k,i,j;
	scanf("%d%d",&n,&k);
	int a[n],c=0;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,a+n);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			int m=a[j]-a[i];
			if(m<k)
				continue;
			else if(m==k)
			{
				c++;
			}
			else if(m>k)
				break;
		}
	printf("%d\n",c);
	return 0;
} 