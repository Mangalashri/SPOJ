#include<iostream>
#include <cstdio>
#include<stack>
#include<cstring>
using namespace std;
int main(void) {
	// your code goes here
	char a[2001];
	int k=0;
	while(1)
	{
		scanf("%s",a);
		if(a[0]=='-')
			break;
		k++;
			int x=0,y=0;
			int l=strlen(a);
			for(int i=0;a[i];i++)
			{
				if(a[i]=='{')
					x++;
				else
					x--;
				if(x<0)
				{
					x+=2;
					y++;
				}
			}
			printf("%d. %d\n",k,x/2+y);
	}
	return 0;
}
 