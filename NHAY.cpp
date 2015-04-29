#include <iostream>
#include<cstdio>
using namespace std;
#include<string>
int main() {
	// your code goes here
	int i;
	long long int l;
	while(scanf("%lld",&l)!=EOF)
	{
		
			string a,b;
			long long int f;
			cin>>a>>b;
			long long int m=b.length();
			for(i=0;i<m;i++)
			{
				f=b.find(a,i);
				if(f!=string::npos)
				{
					printf("%lld\n",f);
					i=f;
				}
			}
			scanf("%lld",&l);
		printf("\n");
	}
	return 0;
} 