#include<stdio.h>
#include<iostream>
using namespace std;
#include<deque>
void printmax(int a[],int n,int k)
{
	deque<int> q(k);
	int i;
	for(i=0;i<k;i++)
	{
		while(!q.empty()&&a[i]>=a[q.back()])
			q.pop_back();
		q.push_back(i);
	}
	for(;i<n;i++)
	{
		cout<<a[q.front()]<<" ";
		while(!q.empty()&&q.front()<=i-k)
			q.pop_front();
		while(!q.empty()&&a[i]>=a[q.back()])
			q.pop_back();
		q.push_back(i);
	}
	cout<<a[q.front()]<<" ";
}
int main()
{
	int n,k,i;
	scanf("%d",&n);
	int *a=new int[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	printmax(a,n,k);
	return 0;
} 