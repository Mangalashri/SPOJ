#include <iostream>
using namespace std;
#include<cstdio>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(c>b&&c>a)
            printf("NO\n");
        else
        {
            int x=gcd(a,b);
            if(c%x==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
	}
	return 0;
}
 