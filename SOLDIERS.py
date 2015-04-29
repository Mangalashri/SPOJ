#!/usr/bin/env python
t=(int)(raw_input())
for i in xrange(t):
	m,n=map(int,raw_input().split())
	if m%2==0:
		temp=n*(m/2)
	else:
		temp=n*(m/2+1)
	if n%2==0:
		temp1=m*(n/2)
	else:
		temp1=m*(n/2+1)
	if temp>temp1:
		print temp
	else:
		print temp1 