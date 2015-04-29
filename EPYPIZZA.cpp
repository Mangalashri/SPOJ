include <iostream>
using namespace std;
#include<cstdio>
int main() {
	// your code goes here
	int t,i;
	int a,b;
	char c;
	scanf("%d",&t);
	int l=0,m=0,n=0,ans=0;
	for(i=0;i<t;i++)
	{
		scanf("%d%c%d",&a,&c,&b);
		if(a==1&&b==4)
			l++;
		else if(a==1&&b==2)
			m++;
		else
			n++;
	}
	//printf("%d %d %d\n",l,m,n);
	int f=1;
	ans+=n;
	if(n>=l)
		l=0;
	else if(l>=n)
		l-=n;
	if(m>=2)
	{
		ans+=m/2;
		m-=m/2*2;
	}
	if(m>=l)
	{
		l=0;
		ans+=l/2;
		m-=l/2;
	}
	else if(l-2*m>0)
	{
		l-=2*m;
		ans+=m;
		m=0;
	}
	ans+=m;
	if(l>=4)
	{
		if(l%4==0)
			l=l/4;
		else
			l=l/4+1;
	}
	ans+=l;
	printf("%d\n",ans+1);
	return 0;
} 