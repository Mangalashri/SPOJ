#include <iostream>
using namespace std;
#include<string>
#include<cstdio>
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		printf("%d ",n);
		string s;
		cin>>s;int j=0,f;
		string a[8]={"TTT","TTH","THT","THH","HTT","HTH","HHT","HHH"};
		for(int k=0;k<8;k++)
		{
			int c=0;
			for(int i=0;s[i];i++)
			{
				f=s.find(a[k],i);
				if(f==string::npos)
					break;
				else
					c++;
				i=f;
			}
			printf("%d ",c);
		}
		printf("\n");
	}	
	return 0;
} 