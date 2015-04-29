#include<iostream>
#include <cstdio>
#include<algorithm>
using namespace std;
int main(void) {
	// your code goes here
	int a[4], c=0;
	while(scanf("%d",&a[0])!=EOF)
	{
		scanf("%d%d%d",&a[1],&a[2],&a[3]);
		sort(a,a+4);
		printf("Case %d: %d\n",++c,a[2]+a[3]);
	}
	return 0;
}
 