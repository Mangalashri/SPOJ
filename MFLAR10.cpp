SPOJ submission 12047103 (C++ 4.3.2) plaintext list. Status: AC, problem MFLAR10, contest SPOJ. By mangalashri (shri), 2014-07-29 18:06:10.
#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
 
int main() {
	// your code goes here
	char s[1100],t;
	while(1)
	{
		gets(s);
		int i,flag=0,j,k=0;
		if(strcmp(s,"*")==0)
			break;
		if(strlen(s)==0)
			continue;
		for(j=0;s[j];j++)
			if(s[j]!=' ')
			{
				t=toupper(s[j]);
				k=1;
				break;
			}
		if(k==0)
			continue;
		int l=strlen(s);
		for(i=j+1;i<l;i++)
		{
				if(s[i]==' ')
				{
					if((s[i+1]==' ')||(s[i+1]=='\0'))
						continue;
					else if(toupper(s[i+1])!=t)
					{
						flag=1;
						break;
					}
				}
		}
		if(flag==1)
			printf("N\n");
		else
			printf("Y\n");
	}
	return 0;
} 
