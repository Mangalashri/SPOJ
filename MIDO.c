#include <stdio.h>
 
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	int t1=0,t2=0,a1=0,a2=0,p,m,s,last=0;
	while(t--)
	{
		scanf("%d%d:%d",&p,&m,&s);
		s+=m*60;
		if(a1>a2)t1+=s-last;
		else if(a1<a2)t2+=s-last;
		if(p==1)a1++;
		else if(p==2)a2++;
		last=s;
	}
	s=2880;
	if(a1>a2)t1+=s-last;
	else if(a1<a2)t2+=s-last;
	printf("%02d:%02d\n",t1/60,t1%60);
	printf("%02d:%02d\n",t2/60,t2%60);
	return 0;
}
 