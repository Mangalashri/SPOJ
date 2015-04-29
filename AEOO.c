#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,a,i,j;
    scanf("%d",&n);
    a=sqrt(n);
    c+=a;
    for(i=1;i<=a;i++)
    	for(j=i+1;i*j<=n;j++)
    		c+=1;
    printf("%d",c);
    return 0;
}
 