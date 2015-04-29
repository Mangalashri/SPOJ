SPOJ submission 12221970 (C) plaintext list. Status: AC, problem BRHPHYS, contest SPOJ. By mangalashri (shri), 2014-08-24 07:15:33.
#include <stdio.h>
 
int main(void) {
	// your code goes here
	int n,i;
	scanf("%d",&n);
	double a=0;
	double s,p;
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&p,&s);
		a=a+s/p;
	}
	a=a*100/n;
	//printf("%lf\n",a);
	if(a>=90 &&a<= 100) 
		printf("A");
	else if(a>=80 &&a<= 89) 
		printf("B");
	else if(a>=70 &&a<= 79) 
		printf("C");
	else if(a>=60 &&a<= 69) 
		printf("D");
	else
		printf("F");
	return 0;
}
 
