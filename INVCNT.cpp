#include<stdio.h>
#include<iostream>
using namespace std;
long long int merge(int a[],int l,int m,int r)
{
	int n1,n2,i,j,k;
	long long int inv=0;
	n1=m-l+1;
	n2=r-m;
	int L[n1],R[n2];
	i=0;j=0;
	for(i=0;i<n1;i++)
		L[i]=a[l+i];
	for(i=0;i<n2;i++)
		R[i]=a[m+1+i];
	i=0;j=0;k=l;
	while(i<n1&&j<n2)
	{
		if(L[i]<=R[j])
			a[k++]=L[i++];
		else
		{
			a[k++]=R[j++];
			inv=inv+(m+1-(l+i));
		}
	}
	while(i<n1)
		a[k++]=L[i++];
	while(j<n2)
		a[k++]=R[j++];
	return inv;
}
long long int msort(int a[],int l,int r)
{
	long long int i=0;
	if(l<r)
	{
		int m=(l+r)/2;
		i+=msort(a,l,m);
		i+=msort(a,m+1,r);
		i+=merge(a,l,m,r);
	}
	return i;
}
int main()
{
	int n,i,t;
	char c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int *a=new int[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		printf("%lld\n",msort(a,0,n-1));	
	}	
	return 0;
} 