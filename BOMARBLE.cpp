#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		int s=(3*pow(n+1,2)-(n+1))/2;
		printf("%d\n",s);
		scanf("%d",&n);
	}
	return 0;
} 