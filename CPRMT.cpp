#include <iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
#include<algorithm>
int main() {
	// your code goes here
	char a[1005],b[10005];
	while(scanf("%s%s",a,b)!=EOF)
	{
		int n1=strlen(a),n2=strlen(b);
		sort(b,b+n2);
		int i,m[26]={0};
		for(i=0;i<n1;i++)
			m[a[i]-'a']++;
		for(i=0;i<n2;i++)
			if(m[b[i]-'a'])
			{
				printf("%c",b[i]);
				m[b[i]-'a']--;
			}
		printf("\n");
	}
	return 0;
} 