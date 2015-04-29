#include <iostream>
#include<stdio.h>
#include<cstring>
#include<math.h>
using namespace std;
#include<algorithm>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,r=0,g,s,i;
		scanf("%d%d",&a,&b);
		g=gcd(a,b);
		s=sqrt(g);
		for(i=1;i<=s;i++)
		{
			if(g%i==0)
			{
				r+=2;
				if(i==g/i)
					r--;
			}
		}
		printf("%d\n",r);
	}
	return 0;
} 